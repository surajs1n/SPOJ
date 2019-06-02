#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        long long K,pro=1;          int i=1,n,j=0;

        scanf("%i%lld",&n,&K);

        if(n > 62)
            n = 62;

        else
            n = n - 2;

        if(n == -1)
            printf("Male\n");

        else
        {
            while(n>=0)
            {
                pro=1;
                for(j=0;    j<n;    j++)
                    pro *= 2;
                if(K/(pro+1)>=1)
                {
                    i++;

                    if(K%pro==0)
                        K = pro;
                    else
                        K = K%pro;
                }
                n--;
            }

            if(i%2==0)
                printf("Female\n");
            else
                printf("Male\n");
        }
    }
    return 0;
}
