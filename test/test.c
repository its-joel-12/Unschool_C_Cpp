#include<stdio.h>
int main()
{
    int m=0;
    printf("Enter the month number:");
    scanf("%d",&m);
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
    {
        printf("\n31 Days");
    }
    else if(m==4 || m==6 || m==9 || m==11)
    {
        printf("\n30 Days");
    }
    else if(m==2)
    {
        printf("\n28 or 29 Days");
    }
    else
        {
            printf("\nInvalid month number!");
        }
    return 0;
    }

