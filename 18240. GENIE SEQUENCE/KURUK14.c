#include<stdio.h>

int main()
{
    int n,i,j,t;

    scanf("%i",&t);

    while(t--)
    {
        int arr[1001]={0},flag = 1;

        scanf("%i",&n);

        for(i=0; i<n;   i++)
        {
            scanf("%i",&j);

            if(j >= n)
                flag = 0;

            else
                arr[j]++;
        }

        if(flag)
        {
            j = n/2;

            if(n%2)
            {
                if(arr[j]!=1)
                {
                    flag =0; break;
                }

                else
                {
                    for(i=0;    i<j;    i++)
                    {
                        if(arr[i] + arr[n-(i+1)] != 2)
                        {
                            flag = 0; break;
                        }
                    }
                }
            }
            else
            {
                for(i=0;    i<=j;   i++)
                {
                    if(arr[i]+arr[n-(i+1)] != 2)
                    {
                        flag = 0; break;
                    }
                }
            }
        }

        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
