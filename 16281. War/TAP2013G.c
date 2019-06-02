#include<stdio.h>

int arr1[100001],arr2[100001],temp[100001];

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
    int i,j,k,t,n,count;

    {
        scanf("%i",&n);

        i = -1;

        while(++i < n)
            scanf("%i",arr1+i);

        i = -1;

        while(++i < n)
            scanf("%i",arr2+i);

        part_it(arr1,0,n-1);
        part_it(arr2,0,n-1);

        count = 0;
        for(i=0,j=0;    i<n && j <n;    i++)
        {
            for(;    j<n;    j++)
                if(arr2[j] > arr1[i])
                {
                    count++;
                    j++;
                    break;
                }
        }

        printf("%i\n",count);

    }

    return 0;
}
