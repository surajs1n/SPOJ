#include<stdio.h>
#include<stdlib.h>
#define S struct

S hold
{
    long long val;
    int status;
}obj[100001],temp[100001];

void merge_it(struct hold *arr,int low,int mid,int high)
{
    int i = low, j = mid+1, k = low-1;

    while( i <= mid && j <= high)
    {
        if(arr[i].val < arr[j].val)
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
    int i,j,k,t,n,count,index;   long long half;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i",&n);     count = 0;

        for(i=0;    i<n;    i++)
        {
            scanf("%lld",&obj[i].val);
            obj[i].status = 0;
        }

        part_it(obj,0,n-1);

        i = 1 + (index = n-1);

        while(--i > 0)
            if(!obj[i].status)
            {
                half = (obj[i].val)/2;

                j = index;

                while( --j >= 0)
                {
                    if(obj[j].val == half && obj[j].status == 0)
                    {
                        count++;
                        obj[j].status = 1;
                        index = j;
                        break;
                    }

                    else if(obj[j].val < half)
                    {
                        index = j+1;
                        break;
                    }
                }

            }

        printf("%i\n",count);

    }

    return 0;
}
