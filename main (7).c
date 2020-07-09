
#include <stdio.h>

int main()
{
    int i=1,num,fact=1;
    printf("enter the number :");
    scanf("%d",&num);
   while(i<=num)
    {
        fact = fact*i;
        i++;
    }
    printf("\n factorial is %d",fact);
    return 0;
}
