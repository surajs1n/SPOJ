#include<stdio.h>

int main()
{
    int t,i,j;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i%i",&i,&j);

        if(i%2 == 0 || j%2 == 0)
            printf("Suresh\n");
        else
            printf("Ramesh\n");
    }
    return 0;
}
