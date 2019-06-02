#include<stdio.h>

int main()
{
    int t,a,b;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i%i",&a,&b);
        printf("%i\n",a*b);
    }

    return 0;

}
