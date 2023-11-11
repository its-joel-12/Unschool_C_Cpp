#include<stdio.h>
int main()
{
    int num=0,terms=0,i=1;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Enter total terms:");
    scanf("%d",&terms);
    while(i<=terms)
    {
        printf("\n%d*%d=%d",num,i,num*i);
        i++;
    }
    return 0;
}
