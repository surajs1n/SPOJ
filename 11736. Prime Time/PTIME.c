#include<stdio.h>

struct prime
{
    int a,state;
}obj[2300];

int main()
{
    int n,num[20000]={0},i,j,index=0,sq=sqrt(20000),temp;

    for(i=0;    i<2300;     i++)
    {
        obj[i].a = obj[i].state = 0;
    }

    obj[0].a = 2;

    for(i=3;    i<=sq;  i += 2)
        if(!num[i])
        {
            obj[++index].a = i;
                for(j=i*i;  j<=20000;   j += (2*i))
                    num[j]=1;
        }

    for(;  i<=20000;    i+=2)
        if(!num[i])
            obj[++index].a = i;


   scanf("%i",&n);

   while(n > 1)
   {
       temp = n;

       for(i=0; obj[i].a!=0 && temp!=1;     i++)
            while(temp%obj[i].a==0)
            {
                obj[i].state++;
                temp /= obj[i].a;
            }

       n--;
   }

   int first=0;

   for(i=0;     obj[i].a != 0;  i++)
        if(obj[i].state)
        {
            if(first++ == 0)
                printf("%i^%i ",obj[i].a,obj[i].state);

            else
                printf("* %i^%i ",obj[i].a,obj[i].state);
        }

    printf("\n");

    return 0;
}
