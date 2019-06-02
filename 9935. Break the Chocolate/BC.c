#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;

    scanf("%i",&b);

    for(a=1;    a<=b;   a++)
    {
        long long dim[3];           int i=0,sum=0,k=0;

        scanf("%lld%lld%lld",dim,dim+1,dim+2);

        for(i=0;    i<3;    i++)
        {
            k=-1;
            while(dim[i]>pow(2,++k));
                sum += k;
        }

        printf("Case #%i: %lld %i\n",a,dim[0]*dim[1]*dim[2]-1,sum);
    }
    return 0;
}
