#include<stdio.h>

int main()
{
    int boys,girls,temp;

    while(1)
    {
        scanf("%i%i",&boys,&girls);

        if(boys == -1 && girls == -1)
            exit(0);

        if(girls>boys)
        {
            temp = boys;
            boys = girls;
            girls = temp;
        }

        temp = boys/(girls+1);

        if(girls!=0     &&  boys%(girls+1)!=0)
            temp++;

        printf("%i\n",temp);
    }
    return 0;
}
