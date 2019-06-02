#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
       long long  num,temp;

       scanf("%lld",&num);

       if(num == 1)
            printf("0\n");

       else if(num == 2)
            printf("1\n");

       else
       {
           temp = (num+2)/4;

           if((num+2)%4==0)
                temp--;

           temp = 2*temp-1;

           if((num+2)%4==3)
            temp++;
       }

       printf("%lld\n",temp);
    }
    return 0;
}
