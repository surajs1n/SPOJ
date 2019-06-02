#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t;
    scanf("%i",&t);

    while(t--)
    {
        int n,m,d;

        scanf("%i%i%i",&n,&m,&d);

        int *h,i;
        h = (int *)malloc(sizeof(int)*n);

        for(i=0;    i<n;    i++)
            scanf("%i",h+i);

        for(i=0;    i<n;    i++)
        {
            while((h[i]-d)>0 && m!=0)
            {
                h[i] -= d;  m--;
            }
        }
        free(h);

        if(m==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
