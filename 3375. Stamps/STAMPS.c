#include<stdio.h>

void mergeSort(int arr[],int low,int mid,int high);
void partit(int arr[],int low,int high);
int temp[1006];

void partit(int arr[],int low,int high){

    int mid;

    if(low<high){
         mid=(low+high)/2;
         partit(arr,low,mid);
         partit(arr,mid+1,high);
         mergeSort(arr,low,mid,high);
    }
}

void mergeSort(int arr[],int low,int mid,int high){

    int i,m,k,l;

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


int main()
{
    int t,i,arr[1006],k,j,sum=0,req,n;

    scanf("%i",&t);

    for(i=1;    i<=t;    i++)
    {
        scanf("%i%i",&req,&n);

        for(j=0;    j<n;    j++)
            scanf("%i",arr+j);

        partit(arr,0,n-1);

        sum = 0;

        for(j=n-1;  j>=0;    j--)
        {
            if(sum < req)
                sum += arr[j];
            else
                break;
        }

        if(sum >= req)
            printf("Scenario #%i:\n%i\n",i,n-j-1);

        else
            printf("Scenario #%i:\nimpossible\n",i);
        printf("\n");
    }
    return 0;
}
