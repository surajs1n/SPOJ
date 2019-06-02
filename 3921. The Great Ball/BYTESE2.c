#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int arr_1[100]={0} , arr_2[100]={0}, i,j,n,total=0,temp;

        scanf("%i",&n);

        for(i=0;    i<n;    i++)
            scanf("%i%i",arr_1+i,arr_2+i);

        for(i=0;    i<n-1;      i++)
            for(j=i+1;    j<n;      j++)
            {
                if(arr_1[j]<arr_1[i])
                {
                    temp = arr_1[i];
                    arr_1[i] = arr_1[j];
                    arr_1[j] = temp;
                }

                if(arr_2[j]<arr_2[i])
                {
                    temp = arr_2[i];
                    arr_2[i] = arr_2[j];
                    arr_2[j] = temp;
                }
            }

        j=0;        temp=0;

        for(i=0;    i<n;  )
        {
            if(arr_1[i]<arr_2[j])
            {
                temp++;   i++;
            }

            else
            {
                j++;    temp--;
            }

            if(temp>total)
                total = temp;

        }

        printf("%i\n",total);
    }

    return 0;
}
