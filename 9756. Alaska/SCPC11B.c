#include<stdio.h>

int temp[1500];

void merge_it(int *arr,int low,int mid,int high)
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

void part_it(int *arr,int low,int high)
{
    int mid;
    if(low<high)
    {
        mid = (low + high)/2;
        part_it(arr,low,mid);
        part_it(arr,mid+1,high);
        merge_it(arr,low,mid,high);
    }
}

int main()
{
    int arr[1500],i,n,flag,t;

    while(1)
    {
        scanf("%i",&n); flag = 1;

        if(n==0)
            break;

        for(i=0;    i<n;    i++)
            scanf("%i",arr+i);

        if(n <= 7)
            flag = 0;

        else
        {
            part_it(arr,0,n-1);

            for(i=1;    i<n;    i++)
                if(arr[i] - arr[i-1] > 200)
                {
                    flag = 0; break;
                }

            if(1422 - arr[n-1] > 100)
            {
                flag = 0;
            }
        }

        if(flag)
            printf("POSSIBLE\n");
        else
            printf("IMPOSSIBLE\n");
    }
    return 0;
}
