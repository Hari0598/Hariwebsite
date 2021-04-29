//Armstrong - If the sum of the powers of the individual digits
//when raised to no of digits times, is equal to the input number

#include<stdio.h>
int find_NOD( int num )
{
    int no_of_digits=0;
    //Find no of digits
    while(num!=0)
    {
      num = num / 10;  //destructing each digit
      no_of_digits++;  //counting for each digit
    }
    return no_of_digits;
}
int raisePower(int digit,int no_of_digits)
{
    int result=1,ctr;
    for(ctr = 0  ;ctr < no_of_digits ; ctr++)
        result = result * digit;
    return result;

}
int main()
{
    int num=1634,no_of_digits=0,safe,digit,pow,sum=0;
    no_of_digits = find_NOD(num);
    safe = num ;//saving num
    while(num != 0)
    {
    digit = num % 10;//extract a digit
   pow = raisePower(digit,no_of_digits);//Raise the power of extracted digit to no of digit times
    sum = sum + pow;//sum the raised value
    num = num  /10;//destruct the digit
    }
    num = safe ; //reinstate
    if(sum == num)
        printf("YES");
    else
        printf("NO");
    return 0 ;
}
