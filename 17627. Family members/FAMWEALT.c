#include<stdio.h>

int main()
{
    int t,x,y,i,n,arr[30];    double w;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i%i%lf",&x,&y,&w);  n = -1;

        while(x!=1)
        {
            if(x%2==1)
            {
                x /= 2;

                if(x%2 == 0)
                    w *= 2;
                else
                    w *= 4;
            }
            else
            {
                x /= 2;
                w *= 2;
            }
        }

        while(y!=1)
        {
            arr[++n] = y%2;
            y /= 2;
        }

        arr[++n] = 1;


        for(i = n-1;    i>=0;   i--)
        {
            if(arr[i+1] == 1 && arr[i]==1)
                w /= 4;

            else
                w /= 2;
        }

        printf("%lf\n",w);

    }
    return 0;
}
