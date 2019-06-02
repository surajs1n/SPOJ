#include<stdio.h>

int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int a,b,i,week=2,con=0,j;

        scanf("%i%i",&a,&b);

        for(i=1901; i<a;   i++)
        {
            if(i%400 == 0)
                week += 366;
            else if(i%100 == 0)
                week += 365;
            else if(i%4 == 0)
                week += 366;
            else
                week += 365;
        }

        week %= 7;

      //  printf("%i\n",week);

        for(i=a;    i<=b;   i++)
        {
            if(i%400 == 0)
                month[1] = 29;
            else if(i%100 == 0)
                month[1] = 28;
            else if(i%4 == 0)
                month[1] = 29;
            else
                month[1] = 28;


            for(j=0;    j<12;   j++)
            {
                if((week+20)%7 == 5)
                    con += (month[j] - 1);

                else
                    con += month[j];

                week = (week+month[j])%7;
            }

        }

        printf("%i",con/144000);
        con %= 144000;
        printf(".%i",con/7200);
        con %= 7200;
        printf(".%i",con/360);
        con %= 360;
        printf(".%i",con/20);
        con %= 20;
        printf(".%i\n",con);

    }

    return 0;

}
