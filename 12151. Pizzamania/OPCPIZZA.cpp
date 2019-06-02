#include<stdio.h>
#define gc getchar_unlocked
inline void scanint(int &x)
{
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}
int arr[100000],temp[100000];

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
    int t,i,j,n,m,count;

    scanint(t);

    while(t--)
    {
        scanint(n);
        scanint(m);

        i=-1;

        while(++i < n)
            scanint(arr[i]);

        part_it(arr,0,n-1);

        i = count = 0;
        j = n-1;

        while(i<j)
        {
            if(arr[i] + arr[j] > m)
                j--;

            else if(arr[i] + arr[j] < m)
                i++;

            else
            {
                count++;
                i++;
            }
        }

        printf("%i\n",count);
    }

    return 0;
}
