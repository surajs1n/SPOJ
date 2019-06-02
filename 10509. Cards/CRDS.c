#include<stdio.h>

int n[2000];

int main()
{
    int num,i,j;    long long sum=0;

    scanf("%i",&num);

    for(i=0;    i<num;      i++)
        scanf("%i",n+i);

    i=-1;

    while(++i < num)
    {
        sum = (((long long) (n[i])) * ( 3*n[i] + 1 ))/2;
        n[i] = sum % 1000007;
        printf("%i\n",n[i]);
    }
    return 0;
}
