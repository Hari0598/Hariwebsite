#include<stdio.h>
int main()
{
    int num1=15996751,num2=3870378;
   // int num1= 280,num2=560;
    int small,big,check_factor,result;
    if( num1 > num2)
    {
        small = num2 ;
        big = num1;
    }
    else
    {
        small = num1;
        big= num2;
    }
    for( check_factor =2; check_factor<= small; check_factor++)
    {
        if(small % check_factor == 0 && big % check_factor==0)
            result = check_factor;
    }
    printf("%d",result);

    return 0 ;

}
