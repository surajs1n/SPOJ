#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    if(t%10)
        printf("1\n%i\n",t%10);

    else
        printf("2\n");

    return 0;
}
