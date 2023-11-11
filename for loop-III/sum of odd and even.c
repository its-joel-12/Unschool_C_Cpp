#include<stdio.h>
int main()
{
    int n=0,odd=0,even=0,i=0;
    printf("Enter total number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("\nNow adding %d to even summands",i);
            even=even+i;
        }
        else
        {
            printf("\nNow adding %d to odd summands",i);
            odd=odd+i;
        }
    }
    printf("\nSum of all even numbers is: %d",even);
    printf("\nSum of all odd numbers is: %d",odd);

    return 0;
}
