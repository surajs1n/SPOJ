#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int x,y;

        scanf("%i%i",&x,&y);

        if(x==0 && y==0)
            printf("0\n");

        else if(x==1 && y==1)
            printf("1\n");

        else if(x==y || y==x-2)
        {
            if(x%2==0)
                printf("%i\n",x+y);
            else
                printf("%i\n",x+y-1);
        }

        else
            printf("No Number\n");
    }
    return 0;
}
