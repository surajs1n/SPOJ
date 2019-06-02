#include<stdio.h>

int arr[100001];

int main()
{
    int i,j,k,n,t,flag,temp;  long long sum = 0,hold,pro;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i",&n);

        sum = flag = 0;

        for(i=1;    i<=n;    i++)
        {
            scanf("%i",arr+i);
            sum += arr[i];
        }

        if(sum%2)
            flag = 1;

        if(!flag)
        {
            for(i=1;    i<=n/2;     i++)
            {
                temp = arr[i];
                arr[i] = arr[n-i+1] ;
                arr[n-i+1] = temp;
            }

            sum = 0;
            for(i=1;    i<=n;   i++)
            {
                sum += arr[i];
                pro = (long long)(i)*(long long)(i-1);
                hold=0;

                j = n+1;
                while(--j > i)
                {
                    if(i <= arr[j])
                        break;
                    else
                        hold += arr[j];

                }

                hold += i*(j - i);

                if(sum > pro + hold)
                {
                    flag = 1;
                    break;
                }
            }
        }

        if(flag)
            printf("SAD\n");
        else
            printf("HAPPY\n");
    }
    return 0;
}
