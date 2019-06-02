#include<stdio.h>

int arr[1000001][2]={0},index=1;

int main()
{
    int i,j,t;

    arr[1][1] = 1;

    for(i=2;    i<=100;     i++)
    {
        if(arr[i][0]==0)
        {
            arr[i][1] = ++index;
            t = i*i*i;
            for(j = t;    j<=1000000;     j += t)
                arr[j][0] = 1;
        }
    }

    for(;   i<=1000000; i++)
        if(!arr[i][0])
            arr[i][1] = ++index;


    scanf("%i",&t);

    for(i=1;    i<=t;   i++)
    {
        scanf("%i",&j);

        if(!arr[j][0])
            printf("Case %i: %i\n",i,arr[j][1]);
        else
            printf("Case %i: Not Cube Free\n",i);
    }
    return 0;
}
