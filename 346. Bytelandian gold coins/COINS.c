#include<stdio.h>

unsigned int arr[100001],n,num;

int max_tri(int num)
{
    if(num < 100001)
        return arr[num];

    else
        return (max_tri(num/2) + max_tri(num/3) + max_tri(num/4));
}

int main()
{
    arr[1] = 1; arr[2] = 2; arr[3] = 3; arr[4] = 4;

    for(n=5;    n<=100000;    n++)
           arr[n]=((n > arr[n/2] + arr[n/3] + arr[n/4])?(n):(arr[n/2] + arr[n/3] + arr[n/4]));

    while(scanf("%u",&num)!=EOF)
    {
        printf("%u\n",max_tri(num));
    }
    return 0;
}
