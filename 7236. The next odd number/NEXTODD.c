#include<stdio.h>

int main()
{
    int a;
    while(scanf("%i",&a)!=EOF)
    {
       printf("%i\n",a+a%2+1);
    }
    return 0;
}
