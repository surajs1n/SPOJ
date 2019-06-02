#include<stdio.h>

int main()
{
    int a,b,c;

    scanf("%d%i%i",&a,&b,&c);

    while(a||b||c)
    {
        if((b-a)==(c-b))
            printf("AP %i\n",2*c-b);

        else
            printf("GP %i\n",((c*b)/a));

        scanf("%d%i%i",&a,&b,&c);
    }
    return 0;
}
