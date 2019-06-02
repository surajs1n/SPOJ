#include<stdio.h>

struct interval
{
    int start,end;
}act[100000],temp[100000];

void merge_it(struct interval *arr,int low,int mid,int high)
{
    int i = low, j = mid+1, k = low-1;

    while( i <= mid && j <= high)
    {
        if(arr[i].end < arr[j].end)
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

    i = low - 1;

    while(++i <= k)
        arr[i] = temp[i];
}

void part_it(struct interval *arr,int low,int high)
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

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i",&n);

        for(i=0;    i<n;    i++)
            scanf("%i%i",&act[i].start,&act[i].end);

        part_it(act,0,n-1);

        struct interval temp;
        temp = act[0];
        count = 1;

        for(i=0;    i<n-1;  i++)
        {
            for(;   i<n;    i++)
                if(temp.end <= act[i].start)
                {
                    count++; break;
                }

            temp = act[i];
        }

        printf("%i\n",count);

    }

    return 0;
}
