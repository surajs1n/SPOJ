#include<stdio.h>

int main()
{
    double x,y;     int t;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%lf%lf",&x,&y);

        if(y > x)
            x = x+y - (y = x);

        printf("%0.3lf\n",2*sqrt(x*x-y*y));
    }
    return 0;
}
