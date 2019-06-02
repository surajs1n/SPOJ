#include<stdio.h>

int main()
{
    long long index,temp;    int year,i,hold=0,rev=0;

    scanf("%i%lld",&year,&index);

    if(year%2)
        rev = 1;

    index++;

    while(year)
    {
        --year;     temp = 1;

        for(i=0;    i<year;     i++)
            temp *= 2;

        if(index > temp)
        {
            index -= temp;
            hold++;
        }
    }

    if(rev)
    {
        if(hold%2)
            printf("red\n");
        else
            printf("blue\n");
    }

    else
    {
        if(hold%2)
            printf("blue\n");
        else
            printf("red\n");
    }

    return 0;
}
