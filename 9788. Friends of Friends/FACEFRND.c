#include<stdio.h>

int main()
{
    int fri[100][101],  n,  i[100], j=0,k=0,j1,k1,     frifri=0;

    scanf("%i",&n);

    for(j=0;    j<n;    j++)
    {
        scanf("%i%i",&fri[0][j],&i[j]);

        for(k=1;    k<=i[j];     k++)
        {
            scanf("%i",&fri[k][j]);
        }
    }

    /////   UPTO  THIS VALUES HAVE BEEN TAKEN    ////////

    for(j=0;    j<n;    j++)
    {
        for(j1=0;   j1<n;   j1++)
        {
            for(k1=1;   k1<=i[j1];   k1++)
            {
                if(fri[0][j]==fri[k1][j1])
                    fri[k1][j1] = 0;
            }
        }
    }






    for(j=0;    j<n;    j++)
    {
        for(k=1;    k<=i[j];    k++)
        {
            if(fri[k][j]!=0)
            for(j1=0;   j1<n;   j1++)
            {
                if(j==j1)
                    k1=k+1;
                else
                    k1=1;
                for(;     k1<=i[j1];   k1++)
                {
                   if(fri[k][j]==fri[k1][j1])
                           fri[k1][j1]=0;
                }
            }
        }
    }

    for(j=0;    j<n;    j++)
    {
        for(k=1;    k<=i[j];     k++)
        {
            if(fri[k][j]!=0)
                frifri++;
        }
    }
    printf("\n%i",frifri);
    return 0;
}
