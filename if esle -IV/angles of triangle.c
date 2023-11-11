#include<stdio.h>
int main()
{
    printf("To check whether the three angles form a triangle or not\n");
    float x=0,y=0,z=0,sum=0;
    printf("\nEnter angle 1:");
    scanf("%f",&x);
    printf("\nEnter angle 2:");
    scanf("%f",&y);
    printf("\nEnter angle 3:");
    scanf("%f",&z);
    sum=x+y+z;
    if((sum==180)  && (x>0) && (y>0) && (z>0))
    {
        printf("\nTriangle can be formed!!!");
    }
    else
    {
        printf("\nTriangle cannot be formed!");
    }
    return 0;
}
