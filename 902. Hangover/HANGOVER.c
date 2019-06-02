#include<stdio.h>

int main()
{
    double num;

    scanf("%lf",&num);

    while(num!=0.00)
    {
        double n=2,sum=0;
        while(sum<num)
        {
            sum += 1/n;
            n++;
        }

        printf("%.0lf card(s)\n",n-2);

        scanf("%lf",&num);
    }
    return 0;
}
