// Factors
#include<stdio.h>
int main()
{
   int num = 307,check_factor,no_of_factors=0;
   for( check_factor = 1; check_factor<= num ; check_factor++)
   {
       if( num % check_factor == 0)
            no_of_factors++;
   }
   if(no_of_factors==2)
    printf("YES");
   else
    printf("NO");
    return 0 ;
}
