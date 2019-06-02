#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int a,b,arev=0,brev=0,temp,sum,sumrev=0;

        scanf("%i%i",&a,&b);

        while(a)
        {
            temp = a%10;
            arev = arev*10 + temp;
            a /= 10;
        }

        while(b)
        {
            temp = b%10;
            brev = brev*10 + temp;
            b /= 10;
        }

        sum = arev+brev;

        while(sum)
        {
            temp = sum%10;
            sumrev = sumrev*10 + temp;
            sum /= 10;
        }

        printf("%i\n",sumrev);
    }
    return 0;
}
