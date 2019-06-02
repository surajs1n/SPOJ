#include<stdio.h>

int arr[200100],hold[100005];

int main()
{
    int i,j,k,n,t,rear,index;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i%i",&n,&k);

        i = -1;
        while(++i <= k)
            hold[i] = 0;

        index=0;
        while(++index <= k)
        {
            scanf("%i",&arr[index]);

            if( arr[index] <= k )
                hold[arr[index]]++;
        }

        rear = 1;

        j = -1;
        while(++j <= k)
        {
           if(!hold[j])
           {
               arr[index] = j;
               hold[j]++;
               break;
           }
        }

        n = (k+1) + n%(k+1);

        while(++index <= n)
        {
            if(arr[rear] <= k)
            {
                hold[arr[rear]]--;

                if(arr[rear] <= j && hold[arr[rear]] == 0)
                {
                    arr[index] = arr[rear];
                    hold[arr[rear]]++;
                    rear++;
                }

                else
                {
                    while(++j <= k)
                    {
                        if(!hold[j])
                        {
                            arr[index] = j;
                            hold[j]++;
                            break;
                        }
                    }

                    rear++;
                }
            }

            else
            {
                while(++j <= k)
                {
                    if(!hold[j])
                    {
                        arr[index] = j;
                        hold[j]++;
                        break;
                    }
                }

                 rear++;
            }
        }

        printf("%i\n",arr[n]);
    }

    return 0;
}
