#include<stdio.h>
#include<math.h>

int main()
{
    int t,i;

    scanf("%i",&t);

    for(i=1;    i<=t;   i++)
    {
        double c,k,t,d,e,f;

        scanf("%lf%lf%lf%lf",&c,&k,&t,&d);

        e = (t*log(d/c))/log(k/c);

        printf("Scenario #%i: %0.2lf\n",i,e);

    }

    return 0;
}
