#include<stdio.h>

int main()
{
    int t,n;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i",&n);

        if(n%2)
            printf("Sorry Shaktiman\n");
        else
            printf("Thankyou Shaktiman\n");
    }
    return 0;
}
