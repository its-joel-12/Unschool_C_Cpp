#include<stdio.h>
int main()
{
    printf("To check whether a number is divisible by 5 and 11\n");
    int x=0;
    printf("\nEnter a number:");
    scanf("%d",&x);
    if((x%5==0)&&(x%11==0))
    {
        printf("Entered number is divisible by 5 AND 11");
    }
    else
    {
        printf("Entered number is NOT divisible by 5 AND 11");
    }
    return 0;
}
