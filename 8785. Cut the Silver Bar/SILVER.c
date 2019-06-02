#include<stdio.h>
#include<math.h>

int main()
{
    while(1)
    {
        int t,i=0,flag=0;

        scanf("%i",&t);

        if(t==0)
            break;

        while(t>=pow(2,i++));

        i-=2;

        printf("%i\n",i);
    }
    return 0;
}
