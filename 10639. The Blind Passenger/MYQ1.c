#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int n,i,j;

        scanf("%i",&n);

        if(n==1)
        {
            printf("poor conductor\n");
            continue;
        }

        n-=2;

        i = n/5 + 1;

        j = n%5 + 1;

        if(i%2!=0)
        {
            switch(j)
            {
                case 1: printf("%i W L\n",i);
                        break;
                case 2: printf("%i A L\n",i);
                        break;
                case 3: printf("%i A R\n",i);
                        break;
                case 4: printf("%i M R\n",i);
                        break;
                default:printf("%i W R\n",i);
            }
        }

        else
        {
            switch(j)
            {
                case 1: printf("%i W R\n",i);
                        break;
                case 2: printf("%i M R\n",i);
                        break;
                case 3: printf("%i A R\n",i);
                        break;
                case 4: printf("%i A L\n",i);
                        break;
                default:printf("%i W L\n",i);
            }
        }
    }

    return 0;

}
