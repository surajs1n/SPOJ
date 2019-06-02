#include<stdio.h>

unsigned int arr[1000],temp[1000],sum,tem;

void merge_it(unsigned int *arr,int low,int mid,int high)
{
    int i = low, j = mid+1, k = low-1;

    while( i <= mid && j <= high)
    {
        if(arr[i] < arr[j])
            temp[++k] = arr[i++];
        else
            temp[++k] = arr[j++];
    }

    if(i > mid)
        while(j <= high)
            temp[++k] = arr[j++];

    else
        while(i <= mid)
            temp[++k] = arr[i++];

    for(i=low;  i<=k;   i++)
        arr[i] = temp[i];
}

void part_it(unsigned int *arr,int low,int high)
{
    int mid=(low+high)/2;
    if(low<high)
    {
        part_it(arr,low,mid);
        part_it(arr,mid+1,high);
        merge_it(arr,low,mid,high);
    }
}



int main()
{
    int t,n,i;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i",&n); int flag = 0,low,high;

        for(i=0;    i<n;    i++)
            scanf("%u",&arr[i]);

        scanf("%u",&sum);

        part_it(arr,0,n-1);

        for(i=0;    i<n-2;  i++)
        {
            low = i+1;  high = n-1;

            while(low<high)
            {
                tem = arr[i] + arr[low] + arr[high];

                if(tem > sum)
                    high--;
                else if(tem < sum)
                    low++;
                else
                {
                    flag++; break;
                }
            }
            if(flag)
                break;
        }

        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
