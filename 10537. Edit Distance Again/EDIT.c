#include<stdio.h>
#define islower(x) (x>=97   && x<=122)

int main()
{
    char str[1001];     int arr1[1000],arr2[1000],i;

    for(i=0;    i<1000;     i++)
    {
        if(i%2==0)
        {
            arr1[i] = 0;
            arr2[i] = 1;
        }

        else
        {
            arr1[i] = 1;
            arr2[i] = 0;
        }
    }

    while(scanf("%s",str)!=EOF)
    {
        int first=0, second = 0,i;

        for(i=0;    str[i]!=0;  i++)
        {
            if(islower(str[i]))
            {
                if(arr1[i]==1)
                    first++;
                else
                    second++;
            }
            else
            {
                if(arr1[i]==0)
                    first++;
                else
                    second++;
            }
        }

        if(first < second)
            printf("%i\n",first);
        else
            printf("%i\n",second);
    }

    return 0;
}
