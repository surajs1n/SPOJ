#include<stdio.h>
#include<math.h>

int main()
{
    int t;  double a,b,c,res;

    scanf("%i",&t);

    while(t--)
    {

        scanf("%lf%lf%lf",&a,&b,&c);

        res = (a*b*c)/(a*b+b*c+c*a+2*sqrt((a*b*c)*(a+b+c)));

        printf("%0.6lf\n",res);
    }

    return 0;
}
