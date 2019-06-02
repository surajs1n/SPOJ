#include<stdio.h>
#include<math.h>
int main()
{
    int t;  double v,k1,k2,angle,res;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%lf%lf%lf",&v,&k1,&k2);

        angle = (acos(-1) - acos(k2/sqrt(16*k1*k1+k2*k2)))/2;

        res = (v*v)*(2*k1*sin(2*angle) + k2 * sin(angle) * sin(angle))/20;

        printf("%0.3lf %0.3lf\n",angle,res);
    }

    return 0;
}
