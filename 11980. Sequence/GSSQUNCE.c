#include<stdio.h>

int arr[50005],temp[50005];

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
    int i,j,flag,t,n,index;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i",&n);

        i = -1;
        while(++i < n)
            scanf("%i",arr+i);

        if(n == 1)
        {
            printf("NO\n");
            continue;
        }

        int status[50005]={0};

        part_it(arr,0,n-1);

        int hold = arr[0];

        i = index = flag = 0;

        status[index]++;

        while(++i < n)
        {
            if(hold != arr[i])
            {
                index++;
                hold = arr[i];
            }

            status[index]++;

            if(status[index] > 2)
            {
                flag = 1;
                printf("NO\n");
                break;
            }
        }

        if(!flag)
            printf("YES\n");
    }

    return 0;
}
