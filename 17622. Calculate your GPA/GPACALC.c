#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int n,sum = 0,i,inte;    char g,ch;     double div=0;

        scanf("%i",&n);

        while(n--)
        {
            scanf("%i%c%c",&i,&ch,&g);

            if(g == 'S')
                inte = 10;
            else if(g == 'A')
                inte = 9;
            else if(g == 'B')
                inte = 8;
            else if(g == 'C')
                inte = 7;
            else if(g == 'D')
                inte = 6;
            else
                inte = 5;

            sum +=(i*inte);
            div += i;

        }

        printf("%0.2lf\n",sum/div);
    }

    return 0;

}
