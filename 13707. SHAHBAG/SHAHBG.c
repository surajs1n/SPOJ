#include<stdio.h>

int main()
{
    int n,arr[30000],i,c=0,num;

    scanf("%i",&n);

    for(i=0;    i<n;    i++)
    {
        scanf("%i",&num);

        arr[num] = 1;

        if(arr[num -1] && arr[num+1])
            c--;

        else if(arr[num -1] || arr[num+1])
            c =c;

        else
            c++;

        printf("%i\n",c);

    }

    printf("Justice\n");

    return 0;
}
