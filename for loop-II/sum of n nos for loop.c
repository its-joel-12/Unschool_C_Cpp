#include<stdio.h>
int main()
{
    int a=1,i=0,sum=0;

    for(i=1;a!=0;i++)
    {
        printf("Enter a number:");
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("\nSum of all the above entered numbers is: %d",sum);

    return 0;
}
