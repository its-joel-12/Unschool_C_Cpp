//Swapping values of the three variables x,y & z
#include<stdio.h>
int main()
{
    int x=10,y=20,z=30,temp=0;
    temp=10;
    x=y;
    y=z;
    z=temp;
    printf("x=%d",x);
    printf("\ny=%d",y);
    printf("\nz=%d",z);

    return 0;
}
