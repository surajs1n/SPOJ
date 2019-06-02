#include<stdio.h>

int arr[5]={3,5,17,257,65537};

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int num;

        scanf("%i",&num);

        if(num==1 || num == 2)
        {
            printf("No\n");
            continue;
        }

        while(num%2 == 0)
            num /= 2;

        int i=-1;

        while(++i<5)
            if(num%arr[i]==0)
                num /= arr[i];

        if(num == 1)
            printf("Yes\n");
        else
            printf("No\n");

    }
    return 0;
}
