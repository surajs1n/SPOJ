#include<stdio.h>

int arr[500001],present[10000000]={0};

int main()
{
    int i,temp;

    arr[0] = 0;

    for(i=1;    i<500001;   i++)
    {
        temp = arr[i-1] - i;

        if(temp > 0 && present[temp] == 0)
        {
            present[temp]++;
            arr[i] = temp;

        }

        else
        {
            arr[i] = arr[i - 1] + i;
            present[arr[i]]++;
        }
    }

    while(1)
    {
        scanf("%i",&i);

        if(i == -1)
            break;

        printf("%i\n",arr[i]);
    }
    return 0;
}
