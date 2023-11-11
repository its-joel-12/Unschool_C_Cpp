#include<stdio.h>
int main()
{
    int n=0,i=0,sum=0;
    printf("Enter a nth number of which sum is to be calculated from 1 to n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d\n",sum);
    return 0;
}
