#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int n,arr[100]={-1},i,j,count_num=0,temp;

        scanf("%i",&n);

        for(i=0;    i<n;    i++)
            scanf("%i",arr+i);

        for(i=0;    i<n-1;    i++)
        {
            for(j=i+1;    j<n;    j++)
            {
                if(arr[i]>arr[j])
                {
                    temp = arr[i];      arr[i]=arr[j];      arr[j]=temp;
                }
            }
        }

        for(i=0;    i<n-1;    i++)
        {
            if(arr[i] != 0)
            for(j=i+1;    j<n;  j++)
            {
                if(2*arr[i]==arr[j])
                {
                    arr[i]=arr[j]=0;
                    count_num++;
                    continue;
                }

            }
        }

        printf("%i\n",count_num);
    }
    return 0;
}
