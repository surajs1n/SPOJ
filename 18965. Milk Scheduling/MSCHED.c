#include<stdio.h>
#define S struct

S node
{
    int gal,dead;
}obj[10005],temp[10005];

int deadline[10005]={0};

void merge_it(S node *arr,int low,int mid,int high)
{
    int i = low, j = mid+1, k = low-1;

    while( i <= mid && j <= high )
    {
        if(arr[i].gal > arr[j].gal)
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
    while( ++i<=k )
        arr[i] = temp[i];
}

void part_it(S node *arr,int low,int high)
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
    int n,i,j,k,sum = 0;

    scanf("%i",&n);

    i = -1;
    while(++i < n)
        scanf("%i%i",&obj[i].gal,&obj[i].dead);

    part_it(obj,0,n-1);

    i = -1;
    while(++i < n)
    {
        j = obj[i].dead+1;

        while(--j > 0)
            if(deadline[j] == 0)
            {
                deadline[j]++;
                sum += obj[i].gal;
                break;
            }
    }

    printf("%i\n",sum);

    return 0;
}
