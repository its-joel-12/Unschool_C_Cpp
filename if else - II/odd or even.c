#include<stdio.h>
int main()
{
    printf("TO CHECK WHETHER THE ENTERED NUMBER IS EVEN OR ODD!!\n");
    int x=0;
    printf("\nEnter a number:");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("Entered number is EVEN!");

    }
    else
    {
        printf("Entered number is ODD!");
    }

    return 0;

}
