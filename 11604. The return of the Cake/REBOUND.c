#include<stdio.h>
#include<math.h>

int main()
{
    int t,flag=0;  double x,y,z,res1,res2;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%lf%lf%lf",&x,&y,&z);

        flag = 0;

        res1 = sqrt(x*x+y*y+2*y*z);

        if(res1 != (int)(res1))
        {
            printf("Not this time.\n");
            continue;
        }

        res2 = (z*(x+res1))/(y+2*z);

        if(res2 == (int)(res2))
            flag = 1;

        else
        {
            res2 = (z*(x-res1))/(y+2*z);

            if(res2 == (int)(res2))
                flag = 1;
        }

        if(flag == 1)
            printf("%i\n",(int)(res2));
        else
            printf("Not this time.\n");
    }

    return 0;
}

