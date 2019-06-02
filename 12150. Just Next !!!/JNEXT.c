#include<stdio.h>

int arr[1000001];

int main()
{
    int i,j,t,index,n;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i",&n); int digit[10]={0};

        for(i=0;    i<n;    i++)
            scanf("%i",&arr[i]);

        digit[arr[n-1]]++;

        for(index=n-2;  index>=0;   index--)
        {
            digit[arr[index]]++;
            if(arr[index] - arr[index+1] < 0)
                break;
        }

        if(index != -1)
        {
            for(j=arr[index]+1; j<=9;   j++)
                if(digit[j])
                {
                    arr[index] = j;
                    digit[j]--;
                    break;
                }

            for(i=0;    i<10;   i++)
            {
                for(j=1;    j<=digit[i];    j++)
                    arr[++index] = i;
            }
            for(i=0;    i<n;    i++)
            printf("%i",arr[i]);
        }
        else
            printf("-1");

        printf("\n");
    }

    return 0;
}
