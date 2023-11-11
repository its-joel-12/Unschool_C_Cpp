#include<stdio.h>
int main()
{
    int x=0,y=0,z=0,sum=0;
    printf("NOTE:Please hit ENTER after each entry!\n");
    printf("\nPlease enter the three numbers: ");
    scanf("%d %d %d",&x,&y,&z);

    sum=x+y+z;
    printf("Therefore, the sum of the three numbers is: %d",sum);

    return 0;
}
