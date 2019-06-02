#include<stdio.h>

int main()
{
    int t,*a,s=0,i=0;

    scanf("%d",&t);

    a = malloc(t*4);

    for(;i<t;i++)
    {
        scanf("%i",a+i);
        if(a[i]>0)
            s += a[i];
    }
    free(a);
    printf("%i",s);
    return 0;
}
