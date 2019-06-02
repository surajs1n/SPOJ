#include<stdio.h>

int main()
{
    int i,num,t,j;

    scanf("%i",&t);

    while(t--)
    {
        int arr[10]={0,0,0,0,0,0,0,0,0,0};

        scanf("%i",&num);

        if(num == 0)
            printf("10\n");

        else if(num < 10)
            printf("%i\n",num);

        else
        {
            for(i=9;    i>1;    i--)
            {
                while(num%i==0)
                {
                    arr[i]++;
                    num /= i;
                }
            }

            if(num != 1)
                printf("-1");

            else
                for(i=2;    i<10;   i++)
                    for(j=1;    j<=arr[i];  j++)
                        printf("%i",i);

            printf("\n");
        }
    }
    return 0;
}
