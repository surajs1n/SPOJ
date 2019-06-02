#include<stdio.h>
#include<stdlib.h>

#define chkC(x,n) (x[n>>6]&(1<<((n>>1)&31)))
#define setC(x,n) (x[n>>6]|=(1<<((n>>1)&31)))

int main()
{
    int i,j,num,*prime,*arr,prime_index=0,k,df=1;  //      long long count = 0;

    //prime = (int *)malloc(6000000*4);
    arr = (int *)malloc(6250010);

    printf("2\n");

    for(i=3;    i<10000;  i+=2)
    {
        if(!chkC(arr,i))
        {
            if(++df%100 == 1)
                printf("%i\n",i);

            for(j=i*i, k = i<<1;  j<100000000;  j = j+k)
            {
                setC(arr,j);
               // count++;
            }
        }
    }

    for(;   i<100000000;  i+=2)
        if(!chkC(arr,i))
        {
            if( ++df %100 == 1)
                printf("%i\n",i);

        }
            //prime[++prime_index]=i;

   // for(i=0;    i<=prime_index;    i+=100)
     //   printf("%i\n",prime[i]);

   //printf("%i",prime_index);

   // printf("%lli",count);

   // free(prime);
    free(arr);

    return 0;
}
