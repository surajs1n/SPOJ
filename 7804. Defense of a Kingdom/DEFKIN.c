#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
            int w,  h,  n,  i,  a,b, xval=0,yval=0,loop=0,  *x, *y;

            long long pro;

            scanf("%i%i%i",&w,&h,&n);

            x = (int *)malloc(sizeof(int)*(w+2));
            y = (int *)malloc(sizeof(int)*(h+2));

            x[0] = y[0] = y[h+1] = x[w+1] = 1;

            for(i=1;    i<w+1;   i++)
                x[i]=0;

            for(i=1;    i<h+1;   i++)
                y[i]=0;

            for(i=1;    i<=n;  i++)
            {
                scanf("%i%i",&a,&b);
                x[a] = y[b] = 1;
            }

            for(i=0;    i<w+1;      i++)
            {
                if(x[i]==1)
                    loop=0;
                else
                {
                    loop++;
                    if(loop>xval)
                        xval = loop;
                }
            }

            for(i=0;    i<h+1;      i++)
            {
                if(y[i]==1)
                    loop=0;
                else
                {
                    loop++;
                    if(loop>yval)
                        yval = loop;
                }
            }

            free(x);    free(y);

            pro = (xval)*(yval);

            printf("%lld\n",pro);
    }
    return 0;
}
