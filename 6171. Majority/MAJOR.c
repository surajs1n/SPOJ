#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int n,i,temp,flag=0,*num;

        scanf("%i",&n);

        num = malloc(sizeof(int)*2001);

        for(i=0;    i<=1000;  i++)
            num[i]=num[2000-i]=0;

        for(i=0;    i<n;    i++)
        {
            scanf("%i",&temp);
            num[1000+temp]++;
        }

        for(i=0;    i<2001; i++)
        {
            if(num[i]>n/2)
            {
                flag = 1;   break;
            }
        }

         free(num);

        if(flag == 1)
            printf("YES %i\n",i-1000);

        else
            printf("NO\n");
    }
    return 0;
}
