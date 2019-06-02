#include<stdio.h>
#include<math.h>
#define QW 32117
int prime[4500],num[32118]={0},prime_index = 0;

int main()
{
   int t,m,n,s,k,i,temp,j,flag;

    k = sqrt(QW);

    prime[0] = 2;

    for(i=3;    i<=k;   i+=2)
        if(!num[i])
        {
            prime[++prime_index] = i;
            t = 2*i;
            for(j = i*i;    j<=QW;   j += t)
                num[j] = 1;
        }

    for(    ;   i<=QW;   i+=2)
        if(!num[i])
            prime[++prime_index] = i;


    scanf("%i",&t);

    while(t--)
    {
        scanf("%d%d",&m,&n);
        if(m==1)
            m++;
        for(;m<=n;m++)
        {
            flag=0;
            temp=sqrt(m);

            for(i=0;prime[i]<=temp;i++)
            {
                if(m%prime[i]==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            printf("%i\n",m);
        }
    }
 return 0;
}
