#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,*arr,i,j,k,temp;     int str[25];

    scanf("%d",&n);

    arr = (int *)malloc(sizeof(int)*n);

    for(i=0;    i<n;    i++)
    {
        scanf("%d",arr+i);

        j=-1;
        if(arr[i]%2==0)
        {
            while(arr[i])
            {
                str[++j] = arr[i]%2;
                arr[i] /= 2;
            }
        }

       for(k=0; j>=0; k++,j-- )
       {
           if(str[j]==1)
                arr[i] += pow(2,k);
       }
    }

    for(i=0;    i<n;    i++)
        printf("%i\n",arr[i]);
    return 0;
}
