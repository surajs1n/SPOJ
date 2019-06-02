#include<stdio.h>

int main()
{
    int n,m,t;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i%i",&n,&m);

        if(n<=m)
        {
            if(n&1)
                printf("R\n");
            else
                printf("L\n");
        }

        else
        {
            if(m&1)
                printf("D\n");
            else
                printf("U\n");
        }

    }
    return 0;
}
