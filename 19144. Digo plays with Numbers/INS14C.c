#include<stdio.h>

int main()
{
    int i,j,k,n,no_zero,no_one,first,second,t;
    char str[1005],ch;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i%i%c",&n,&k,&ch);
        scanf("%s",str);

        no_zero = no_one = 0;

        first = (n - k)/2;
        second = (n - k) - first;

        i = -1;
        while(++i < n)
        {
            if(str[i] == '1')
                no_one++;
            else
                no_zero++;
        }

        if(no_zero <= first)
        {
            i = -1;
            while(++i < k)
                printf("1");
        }

        else if(no_one <= second)
        {
            i = -1;
            while( ++i < k )
                printf("0");
        }

        else
        {
            i=-1;
            while(++i < n)
            {
                if(str[i] == '1' && second)
                {
                    str[i] = '2';
                    second--;
                }

                else if(str[i]=='0' && first)
                {
                    str[i] = '2';
                    first--;
                }
            }

            i = -1;
            while(++i < n)
                if(str[i]!='2')
                    printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
