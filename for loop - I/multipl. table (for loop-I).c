#include<stdio.h>
int main()
{
    int a,i,m;
    printf("Enter a number:");
    scanf("%d",&a);

    for(i=1;i<=10;i++)
    {
        m=a*i;
        printf("%d*%d=%d\n",a,i,m);
    }
    return 0;
}
