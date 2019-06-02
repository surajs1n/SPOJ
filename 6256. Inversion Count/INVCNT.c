#include<stdio.h>

unsigned long long count_num=0;

void mergeSort(int arr[],int low,int mid,int high)
{
    int i,m,k,l,temp[200000];

    l=low;    i=low;    m=mid+1;

    while((l<=mid)&&(m<=high))
    {
         if(arr[l] > arr[m])
         {
             temp[i]=arr[l]; count_num += (high - m + 1);
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

void part_it(int arr[],int low,int high){

    int mid;

    if(low<high){
         mid=(low+high)/2;
         part_it(arr,low,mid);
         part_it(arr,mid+1,high);
         mergeSort(arr,low,mid,high);
    }
}

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int n,i,j,arr[200000];  count_num=0;

        scanf("%i",&n);

        for(i=0;    i<n;    i++)
            scanf("%i",arr+i);

        part_it(arr,0,n-1);

        printf("%llu\n",count_num);

    }
    return 0;
}
