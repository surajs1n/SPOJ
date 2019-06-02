#include<stdio.h>

void mergeSort(int arr[],int low,int mid,int high);
void part_it(int arr[],int low,int high);

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
            char ch[200];   int n,i,arr[100000],temp;    long long sum=0;

            scanf("%i",&n);

            for(i=0;    i<n;    i++)
                scanf("%s %i",ch,arr+i);

            part_it(arr,0,n-1);

            for(i=0;    i<n;    i++)
            {
                temp = (arr[i] - i - 1);
                if(temp < 0 )
                    temp *= -1;

                sum += temp;
            }

            printf("%lld\n",sum);
    }

    return 0;
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

void mergeSort(int arr[],int low,int mid,int high){

    int i,m,k,l,temp[100000];

    l=low;
    i=low;
    m=mid+1;

    while((l<=mid)&&(m<=high)){

         if(arr[l]<=arr[m]){
             temp[i]=arr[l];
             l++;
         }
         else{
             temp[i]=arr[m];
             m++;
         }
         i++;
    }

    if(l>mid){
         for(k=m;k<=high;k++){
             temp[i]=arr[k];
             i++;
         }
    }
    else{
         for(k=l;k<=mid;k++){
             temp[i]=arr[k];
             i++;
         }
    }

    for(k=low;k<=high;k++){
         arr[k]=temp[k];
    }
}
