#include<stdio.h>

int main()
{
    int arr[4],i,j=1;

    while(scanf("%i%i%i%i",arr,arr+1,arr+2,arr+3) != EOF)
    {
        int m1=-1,m2;

        for(i=0;    i<4;    i++)
        {
            if(arr[i] > m1)
            {
                m2 = m1;
                m1 = arr[i];
            }

            else if(arr[i] > m2)
            {
                m2 = arr[i];
            }

        }

        printf("Case %i: %i\n",j++,m1+m2);
    }

    return 0;

}
