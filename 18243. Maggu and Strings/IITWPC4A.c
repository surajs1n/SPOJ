#include<stdio.h>
#include<stdlib.h>

char *str;

int main()
{
    int i,j,k,t,a,b;

    scanf("%i",&t);

    while(t--)
    {
        str = malloc(100001);

        scanf("%s",str);      long long hold[2]={0,0};

        scanf("%i%i",&a,&b);

        for(i=0;    str[i]!=0;      i++)
        {
            if(str[i]=='a')
            {
                int count = 0;

                for(;    str[i]!=0;  i++)
                {
                    if(str[i]!='a')
                        break;
                    else
                        count++;
                }

                hold[1] += (((long long)(count/a))*b + count%a);

                hold[0] += count;

                if(str[i]!=0)
                {
                    hold[1]++; hold[0]++;
                }
            }

            else if(str[i]==0)
                break;
            else
            {
                hold[1]++; hold[0]++;
            }


        }

        if(hold[0] < hold[1])
            printf("%lld %lld\n",hold[0],hold[1]);

        else
            printf("%lld %lld\n",hold[1],hold[0]);

    }

    free(str);

    return 0;
}
