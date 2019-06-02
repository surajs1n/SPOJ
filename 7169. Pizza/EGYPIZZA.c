#include<stdio.h>

int main()
{
    int t,a,b,n1=0,n2=0,n3=0,sum=0;         char ch;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i%c%i",&a,&ch,&b);

        if(a==1 && b==4)
            n1++;

        else if(a==1 && b==2)
            n2++;

        else
            n3++;
    }

    sum = n3+n2/2;   n1 = n1-n3;

    if(n2%2!=0)
    {
        sum++;

        if(n1>2)
        {
            n1 -= 2;    sum += n1/4;    n1 %= 4;

            if(n1!=0)
                sum++;
        }
    }

    else if(n1>0)
    {
         sum += n1/4;   n1 %= 4;

         if(n1!=0)
            sum++;
    }

    printf("%i\n",sum+1);

    return 0;
}
