#include<stdio.h>

int arr[1000000],temp[1000000];

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
    int i,j,index=-1,start,end;

    while(scanf("%i",&i)!=EOF)
    {
        arr[++index] = i;
    }

    if(index==0)
        printf("for (int i = %i; i <= %i; i++) cout << i << \" \";\n",arr[0],arr[0]);

    else
    {
        part_it(arr,0,index);

        i=start=0;

        while(i <= index)
        {
            for(++i;  i<=index; i++)
                if(arr[i]-arr[i-1]!=1)
                    break;

            if(i==index+1)
            {
                end = index;
                printf("for (int i = %i; i <= %i; i++) cout << i << \" \";\n",arr[start],arr[end]);
            }


            else if(i == index)
            {
                printf("for (int i = %i; i <= %i; i++) cout << i << \" \";\n",arr[start],arr[index-1]);
                printf("for (int i = %i; i <= %i; i++) cout << i << \" \";\n",arr[index],arr[index]);
                i = index +10;
            }

            else
            {
                end = i-1;
                printf("for (int i = %i; i <= %i; i++) cout << i << \" \";\n",arr[start],arr[end]);
            }
            start = i;
        }
    }

    return 0;
}
