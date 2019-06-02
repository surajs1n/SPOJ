#include<stdio.h>

struct hold
{
    int val;
    int count;
}obj[1000],temp[1000];

void merge_it(struct hold *arr,int low,int mid,int high)
{
    int i = low, j = mid+1, k = low-1;

    while( i <= mid && j <= high)
    {
        if(arr[i].count >= arr[j].count)
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

void part_it(struct hold *arr,int low,int high)
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
    int i,j,k,t,n,flag = 0,index=-1,temp;

    scanf("%i%i%i",&n,&k,&obj[0].val);

    obj[++index].count = 1;

    for(i=1;    i<n;    i++)
    {
        scanf("%i",&temp);

        for(j=flag=0;    j<=index;   j++)
        {
            if(obj[j].val == temp)
            {
                obj[j].count++;
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            obj[++index].val = temp;
            obj[index].count = 1;
        }
    }

    part_it(obj,0,index);

    for(i=0;    i<=index;   i++)
    {
        for(j=0;    j<obj[i].count;    j++)
            printf("%i ",obj[i].val);
    }
    return 0;
}
