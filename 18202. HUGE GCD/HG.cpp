#include<stdio.h>
#include<math.h>

int arr1[1000],arr2[1000];

#define gc getchar_unlocked
inline void scanint(int &x)
{
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}

int main()
{
    int i,j,k,n,m,a,b,over = 0,temp;  long long sum = 1;

    scanint(n);

    i=-1;

    while(++i < n)
        scanint(arr1[i]);

    scanint(m);

    i=-1;

    while(++i < m)
        scanint(arr2[i]);

    i = j = -1;

    while(++i < n)
    {
        j = -1;
        while(++j < m)
        {
            a = arr1[i];
            b = arr2[j];

            if(a > b)
            {
                while(b)
                {
                    temp = b;
                    b = a%b;
                    a = temp;
                }
            }

            else
            {
                while(a)
                {
                    temp = a;
                    a = b%a;
                    b = temp;
                }
            }

            if(temp != 1)
            {
                arr1[i] /= temp;
                arr2[j] /= temp;

                sum *= temp;

                if(sum >= 1000000000)
                {
                    over = 1;
                    sum %= 1000000000;
                }

            }
        }
    }

    if(!over)
        printf("%lld\n",sum);

    else
    {
        for(i=0;    i<11;   i++)
            if( sum/(int)pow(10,i) == 0)
                break;

        for(j=0;  j < 9 - i;   j++)
            printf("0");

        printf("%lld\n",sum);
    }

    return 0;
}
