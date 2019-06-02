#include<stdio.h>

int main()
{
    int t,c;

    scanf("%i",&t);

    for(c=1;    c<=t;   c++)
    {
        int n,r,R1[1000]={0},R2[10000],i,j,flag=1;

        scanf("%i%i",&n,&r);

        for(i=0;    i<r;    i++)
        {
            scanf("%i%i",&j,&R2[i]);
            R1[j]++;
        }

        for(i=0;    i<r;    i++)
        {
            if(R1[R2[i]])
            {
                flag = 0;
                break;
            }
        }

        printf("Scenario #%d: ",c);

        if(flag == 0)
            printf("spied\n");

        else
            printf("spying\n");
    }

    return 0;

}
