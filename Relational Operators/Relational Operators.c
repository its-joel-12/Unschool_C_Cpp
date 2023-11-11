#include<stdio.h>
int main()
{
    printf("When 2>1: %d\n",2>1);
    printf("When 1>2: %d\n",1>2);

    printf("\nWhen 1<2: %d\n",1<2);
    printf("When 2<1: %d\n",2<1);

    printf("\nWhen 2>=1: %d\n",2>=1);
    printf("When 1>=2: %d\n",1>=2);
    printf("When 1>=1: %d\n",1>=1);

    printf("\nWhen 2<=1: %d\n",2<=1);
    printf("When 1<=2: %d\n",1<=2);
    printf("When 2<=2: %d\n",2<=2);

    printf("\nWhen 2=1: %d\n",2==1);
    printf("When 2=2: %d\n",2==2);

    printf("\nWhen 2!=1: %d\n",2!=1);
    printf("When 2!=2: %d\n",2!=2);

    return 0;
}
