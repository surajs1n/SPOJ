#include<stdio.h>
#include<math.h>

int main()
{

    while(1)
    {

        double angle,N,r,pi;

        scanf("%lf %lf",&r,&N);

        if(N==0 && r==0)
            break;

        pi=acos(-1);

        N=2*N;
        angle = (pi *(N-2))/(2*N) ;

        printf("%.2lf\n",r/cos(angle));

    }

    return 0;
}
