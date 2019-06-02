#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,j,t,and_res,xor_res,sqrt_a,sqrt_b;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i%i",&a,&b);

        and_res = xor_res = 0;

        sqrt_a = sqrt(a);
        sqrt_b = sqrt(b);

        if(a == sqrt_a*sqrt_a)
            i = 2*sqrt_a + 1;
        else
            i = 2*sqrt_a + 3;

        j = 2*sqrt_b - 1;

        if(i <= j)
        {
            and_res = xor_res = i;
            i += 2;
        }

        while(i<=j)
        {
            and_res &= i;
            xor_res ^= i;
            i += 2;
        }

        printf("%i\n",(and_res&xor_res));
    }
    return 0;
}
