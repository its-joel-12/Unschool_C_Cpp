#include<stdio.h>
int main()
{
    int x=3,y=4,result=0;

    result=x+y;
    printf(" Sum: %d\n",result);

    result=x*y;
    printf("\n Product: %d\n",result);

    result=x-y;
    printf("\n Difference; %d\n",result);

    result=x/y;
    printf("\n Division: %d\n",result);

    result=x%y;
    printf("\n Remainder: %d\n",result);

    x++;
    printf("\n 3+1=%d\n",x);

    y--;
    printf("\n 4-1=%d\n",y);

    return 0;

}

