#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int a,b,hcf,temp,count_num=0,i=0;

        scanf("%d%d",&a,&b);

        if(b>a)
        {
            temp = b;
            b = a;
            a = temp;
        }

        hcf = b;

        while(hcf)
        {
            temp = hcf;

            hcf = a%hcf;

            a = temp;
        }

        hcf =a;

        for(i=1;    i<sqrt(hcf);   i++)
        {
            if(hcf%i==0)
                count_num++;
        }

        temp = sqrt(hcf);

        if(hcf != 1)
        {
            count_num *= 2;

            if(temp==sqrt(hcf))
                count_num++;
        }

        else
            count_num = 1;

        printf("%i\n",count_num);
    }
    return 0;
}
