#include<stdio.h>
#include<stdlib.h>

int main()
{
    int k=1,n,limit=1300000,sqrt_limit=1141,x,y,num[1301000],prime[100100];

    for(x=0;    x<1301000;  x++)
        num[x]=0;

    for(x=1;    x<=sqrt_limit;  x++)
        for(y=1;    y<=sqrt_limit;  y++)
        {
            n = 4*x*x+y*y;
            if(n<=limit && (n%12==1 || n%12==5))
                num[n]++;

            n = 3*x*x+y*y;
            if(n<=limit && n%12==7)
                num[n]++;

            n = 3*x*x-y*y;
            if(x>y && n<=limit && n%12==11)
                num[n]++;
        }

    for(x=5;    x<=sqrt_limit;    x++)
        if(num[x]%2==1)
            for(y=x*x;      y<limit;   y=y+(x*x))
                num[y]=0;

    prime[0]=2;     prime[1]=3;

    for(y=5; y<=limit;  y++)
        if(num[y]%2==1)
            prime[++k]=y;

    while(scanf("%i",&n)!=EOF)
       printf("%i\n",prime[n-1]);

    return 0;
}
