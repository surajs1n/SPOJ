#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        long long a,b,hcf,lcm,temp_a,temp_b,temp;

        scanf("%lld%lld",&a,&b);      temp_a = a; temp_b = b;

        if(temp_b>temp_a)
        {
            temp = temp_a;
            temp_a = temp_b;
            temp_b = temp;
        }

        hcf = temp_b;

        while(1)
        {
            if(temp_a%hcf==0)
                break;
            else
            {
                temp = hcf;
                hcf = temp_a%hcf;
                temp_a = temp;
            }
        }

        lcm = (a*b)/hcf;

        printf("%lld %lld\n",lcm/a,lcm/b);
    }
    return 0;
}
