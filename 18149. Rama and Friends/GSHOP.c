#include<stdio.h>

int temp[105];

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
        int arr[105],n,i,no_of_neg,k,t;

        scanf("%i",&t);

        while(t--)
        {
            scanf("%i%i",&n,&k);    int sum =0;

            for(i=1;    i<=n;    i++)
                scanf("%i",arr+i);

            for(i=1;    (arr[i]<0)  && (i<=n) && k;   i++)
            {
                arr[i] *= -1;
                k--;
            }

            part_it(arr,1,n);

            if(k&1)
                arr[1] *= -1;

            for(i=1;    i<=n;   i++)
                sum += arr[i];

            printf("%i\n",sum);

        }
        return 0;
}
