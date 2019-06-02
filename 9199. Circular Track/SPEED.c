#include<stdio.h>
#include<math.h>

int main()
{
    int t,s1,s2,d,hcf;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i%i",&s1,&s2);

        d = abs(s1 - s2);

        if(s1 < 0)
            s1 *= -1;
        if(s2 < 0)
            s2 *= -1;

        if(s1 < s2)
            s1 = (s1 + s2) - (s2 = s1);

        while(s2)
        {
            hcf = s2;
            s2 = s1%s2;
            s1 = hcf;
        }

        printf("%i\n",d/hcf);
    }

    return 0;
}
