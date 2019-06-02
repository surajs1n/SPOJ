#include<stdio.h>
#include<math.h>

int main()
{
    int t,six=6;  double a,b,c,x1,x2;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%lf%lf%lf",&a,&b,&c);

        x1 = -1;

        x2 = c/a;
        six = 6;

        while(x2!=x1 && six)
        {
            x1 = x2;
            x2 = x1 - ( a*x1 + b*sin(x1) - c )/ ( a + b*cos(x1) );
            six--;
        }

        printf("%lf\n",x2);
    }

    return 0;
}
