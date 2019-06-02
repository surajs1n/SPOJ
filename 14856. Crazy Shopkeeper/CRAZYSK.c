#include<stdio.h>

int condition(char *X, char *N)
{
    int i,j,flag=1;

    for(i=0;    X[i]!=0;    i++);
    for(j=0;    N[i]!=0;    j++);

    if(i>j)
        return 1;
    else if(i<j)
        return 0;
    else
    {
            for(i=0;    X[i]!=0;  )
            {
                if(N[i]==X[i])
                    i++;
                else if(N[i]>x[i])
                {
                    flag =0; break;
                }
                else
                    break;
            }
    }

    if(flag==0)
        return 0;
    else
        return 1;

}

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
            char X[25],N[25],sum[30],Q[25],R[25];       int i,j,k;

            for(i=0;    i<30;   i++)
                sum[i]='0';

            scanf("%s%s",X,N);

            for(i=0;    X[i]!=0;    i++)
                sum[i+1]    =   X[i];

            while(condition(X,N))
            {
                    ////////////  INComplete conditions
            }
    }
    return 0;
}
