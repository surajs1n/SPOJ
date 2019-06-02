#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int n,r[1000],R[1000],i,index,m = -1,flag=1;

        scanf("%i",&n);

        for(i=0;    i<n;    i++)
        {
            scanf("%i%i",&r[i],&R[i]);

            if(m < r[i])
            {
                m = r[i];
                index = i;
            }
        }

        for(i=0;    i<n;    i++)
            if(m <= R[i] && i!=index)
            {
                flag=0; break;
            }

        if(flag == 0)
            printf("-1\n");

        else
            printf("%i\n",index+1);

    }

    return 0;
}
