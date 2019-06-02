#include<stdio.h>

int main()
{
    int n,i;

    scanf("%i",&n);

    while(n--)
    {
        scanf("%i",&i);

        printf("%i\n",(i+1)/2);
    }

    return 0;
}
