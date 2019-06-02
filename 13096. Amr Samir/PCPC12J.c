#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int arr[101]={0},num,i,flag=0,j,n,fre=-10;

        scanf("%i",&n);

        for(i=0;    i<n;    i++)
        {
            scanf("%i",&num);

            arr[num]++;
        }

        for(i=1;    i<101;  i++)
        {
            if(arr[i]!=0  && arr[i]%i==0)
            {
                if(fre < arr[i])
                    fre = arr[i];
            }

            else
                arr[i] = 0;
        }

        for(i=1;    i<101;  i++)
        {
            if(fre == arr[i])
            {
                flag = 1;
                printf("%i\n",i);
                break;
            }
        }

        if(!flag)
            printf("-1\n");
    }

    return 0;
}
