#include<stdio.h>
int main()
{
    float p=0.0;
    printf("Enter your percentage: ");
    scanf("%f",&p);
    if(p>=80 && p<=100)
    {
        printf("\nGrade: A ");
    }
    else if(p>=70 && p<80)
    {
        printf("\nGrade: B");
    }
    else if(p>=60 && p<70)
    {
        printf("\nGrade: C");
    }
    else if(p>=45 && p<60)
    {
        printf("\nGrade: D");
    }
    else if(p<45 && p>=0)
    {
        printf("\nFAILED!!!");
    }
    else
    {
        printf("Enter valid percentage!");
    }
    return 0;
}
