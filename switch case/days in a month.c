#include<stdio.h>
int main()
{
    int m=0;
    printf("Enter the month number: ");
    scanf("%d",&m);
    switch(m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:printf("\n31 Days!");
        break;
    case 4:
    case 6:
    case 9:
    case 11:printf("\n30 Days!");
        break;
    case 2:printf("\n28 or 29 Days!");
        break;
    default:printf("\nInvalid month number!!!");
    }
    return 0;
}
