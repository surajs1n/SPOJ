#include<stdio.h>

void merge_sort(int *arr,int low,int mid,int high)
{
    int i,j,k,temp[100000];

    i = low;
    j = mid+1;
    k = low;

    while( i <= mid && j<= high )
    {
        if(arr[i] < arr[j])
            temp[k] = arr[i++];

        else
            temp[k] = arr[j++];

        k++;
    }

    if(i>mid)
    {
        while( j<=high )
        {
            temp[k] = arr[j];
            j++; k++;
        }
    }

    else
    {
        while(i<= mid)
        {
            temp[k] = arr[i];
            i++;    k++;
        }
    }

    for(k=low;  k<=high;    k++)
        arr[k] = temp[k];
}

void part_it(int *arr,int low,int high)
{
    int mid;

    if(low < high)
    {
        mid = (low+high)/2;

        part_it(arr,low,mid);
        part_it(arr,mid+1,high);
        merge_sort(arr,low,mid,high);
    }
}

int main()
{
    int n,k,i,j,arr[100000],c=0;

    scanf("%i%i",&n,&k);

    for(i=0;    i<n;    i++)
        scanf("%i",&arr[i]);

    part_it(arr,0,n-1);

    for(i=0;    i<n-1;  i++)
    {
        for(j=i+1;    j<n;   )
        {
            if(arr[j]-arr[i] < k)
                j++;
            else if(arr[j]-arr[i] > k)
                break;

            else
            {   c++;    break;}

        }
    }

    printf("%i\n",c);


    return 0;
}
