#include<stdio.h>
#include<math.h>
#define PI (2*acos(0.0))

int main()
{
    int t,i;

    scanf("%i",&t);

    for(i=1;    i<=t;   i++)
    {
        double s,d,res;

        scanf("%lf%lf",&d,&s);

        res = (d*9.806)/(s*s);

        if(res > 1.000000)
            printf("Scenario #%i: -1\n",i);

        else
        {
           res = (asin(res)*180)/PI;
           res /= 2;
           printf("Scenario #%i: %0.2lf\n",i,res);
        }
    }

    return 0;
}
