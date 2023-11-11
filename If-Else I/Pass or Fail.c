#include<stdio.h>
int main()
{
    float p;

    printf("Enter your percentage here : ");
    scanf("%f",&p);

    if(p>=40)
    {
        printf("PASS");
    }
    else
    {
        printf("FAIL");
    }

    return 0;
}
