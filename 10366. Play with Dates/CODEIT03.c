#include<stdio.h>

int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int d,m,y,iy=2012,i,sum=0;

        scanf("%i%i%i",&d,&m,&y);

        while(iy < y)
        {
            if(iy%400 == 0)
                sum += 366;
            else if(iy%100 == 0)
                sum += 365;
            else if(iy%4 == 0)
                sum += 366;
            else
                sum += 365;

            iy++;
        }


        if(iy%400 == 0)
            month[1] = 29;
        else if(iy%100 == 0)
            month[1] = 28;
        else if(iy%4 == 0)
            month[1] = 29;
        else
            month[1] = 28;

        for(i=0;    i<m-1;   i++)
            sum += month[i];

        sum += (d-1);

        sum = sum%7 + 1;
        switch(sum)
        {
            case 1: printf("Sunday\n"); break;
            case 2: printf("Monday\n"); break;
            case 3: printf("Tuesday\n");    break;
            case 4: printf("Wednesday\n"); break;
            case 5: printf("Thursday\n");   break;
            case 6: printf("Friday\n");  break;
            default:printf("Saturday\n");
        }
    }

    return 0;

}
