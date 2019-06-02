#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int x,y,z,flag=1,gcd;

        scanf("%i%i%i",&x,&y,&z);

        if(x > y)
        {
            x = x + y - (y=x);
        }

        if(z > y)
            flag = 0;

        if(flag)
        {
            while(x)
            {
                gcd = y;
                y = x;
                x = gcd%x;
            }

            if(z%y != 0)
                flag = 0;

        }

        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
