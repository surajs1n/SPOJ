#include<stdio.h>

int main()
{
    int t,i;  double num;

    scanf("%i",&t);

    for(i=1;    i<=t;   i++)
    {
        scanf("%lf",&num);

        printf("Case %i: %0.2lf\n",i,4*num*num+0.25);
    }
    return 0;
}
