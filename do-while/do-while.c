#include<stdio.h>
int main()
{
    int num=0,sum=0;

    do
    {
        printf("Enter a  number:");
        scanf("%d",&num);

        sum=sum+num;
    }
    while(num!=0);

    printf("Sum= %d",sum);

    return 0;
}
