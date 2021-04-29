//1994329    9
#include<stdio.h>
int digitOccurrence(int num , int digit)
{
    int rem,count=0;
    while(num!=0)
    {
        rem = num % 10;
        if(rem == digit)
            count++;//count = count + 1;
         num = num / 10;
    }
    return count;
}
int main()
{
    int num = 1994939299,digit=9;
    printf("%d",digitOccurrence(num,digit));
    return 0 ;
}
