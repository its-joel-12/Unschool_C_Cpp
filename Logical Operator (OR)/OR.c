#include<stdio.h>
int main()
{
    printf("TT: %d\n",1||1);
    printf("TF: %d\n",1||0);
    printf("FT: %d\n",0||1);
    printf("FF: %d\n",0||0);
    return 0;
}
