#include<stdio.h>

void Sort(int arr[],int low,int mid,int high)
{
    int i,m,k,l,temp[20000];

    l=low;    i=low;    m=mid+1;

    while((l<=mid)&&(m<=high))
    {
         if(arr[l]<=arr[m])
         {
             temp[i]=arr[l];
             l++;
         }

         else
         {
             temp[i]=arr[m];
             m++;
         }
         i++;
    }

    if(l>mid)
    {
         for(k=m;k<=high;k++)
         {
             temp[i]=arr[k];
             i++;
         }
    }

    else
    {
         for(k=l;k<=mid;k++)
         {
             temp[i]=arr[k];
             i++;
         }
    }

    for(k=low;k<=high;k++)
    {
         arr[k]=temp[k];
    }
}


void merge_sort(int *arr,int low,int high)
{
    int mid;

    if(low<high)
    {
         mid=(low+high)/2;
         merge_sort(arr,low,mid);
         merge_sort(arr,mid+1,high);
         Sort(arr,low,mid,high);
    }
}


int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int n,k,arr[20000],i,min_no=10000000007;

        scanf("%i%i",&n,&k);

        for(i=0;    i<n;    i++)
            scanf("%i",arr+i);

        merge_sort(arr,0,n-1);

        if(k!=1)
        {
            for(i=0;    i<n-k+1;    i++)
                if(arr[i+k-1]-arr[i]<min_no)
                    min_no = arr[i+k-1]-arr[i];
        }

        else
            min_no=0;

        printf("%i\n",min_no);
    }

    return 0;
}
