#include<stdio.h>

int main()
{
    int n;

    while( scanf("%i",&n) != EOF )
    {
        int arr[15]={0},i,n1=0,flag=0;      unsigned long long pro=0;

        for(i=0;    i<n;    i++)
        {
            scanf("%i",arr+i);

            if(arr[i]<0)
                arr[i] *= -1;

            else if(arr[i]==0)
                flag++;

            if(arr[i]>1)
                pro=1;
        }

        for(i=0;    i<n;    i++)
        {
            if(arr[i]!=0)
            {
                if(arr[i]!= 1)
                    pro = pro * arr[i];
                else
                    n1++;
            }
        }

        pro *= -1;

        if(flag == n)
            printf("0\n");
        else
            printf("%lld\n",pro-n1);

    }
    return 0;
}
