#include<stdio.h>

int main()
{
    double f;

    while(1)
    {
        scanf("%lf",&f);

        if(f==0)
            break;

        printf("%0.2lf\n",(f*f)/(2*acos(-1.0)));
    }

    return 0;
}
