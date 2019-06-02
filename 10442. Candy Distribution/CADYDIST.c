#include<stdio.h>

void merge_it(int *arr,int low,int mid, int high)
{
        int i=low, j=mid+1, temp[200000], k=low-1;

        while(i<=mid && j<= high)
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

        for(k=low;  k<=high;    k++)
            arr[k] = temp[k];
}

void part_it(int *arr, int low, int high)
{
    int mid;
    if(low < high)
    {
        mid = (low+high)/2;
        part_it(arr,low,mid);
        part_it(arr,mid+1,high);
        merge_it(arr,low,mid,high);
    }
}

int main()
{
    int i,j,n,stu[200000],cost[200000];

    while(1)
    {
        scanf("%i",&n);     long long sum = 0;

        if(!n)
            break;

        for(i=0;    i<n;    i++)
            scanf("%i",stu+i);

        for(i=0;    i<n;    i++)
            scanf("%i",cost+i);

        part_it(stu,0,n-1);
        part_it(cost,0,n-1);

        for(i=0;    i<n;    i++)
            sum += ((long long)(stu[i])*(cost[n-1-i]));

        printf("%lld\n",sum);
    }
    return 0;
}
