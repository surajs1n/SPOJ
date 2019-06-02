#include<stdio.h>

int arr[100001][11]={0};

int main()
{
    int n,i,a,b,d,k,j,c,temp;

    arr[0][10] = 1;

    for(i=2;    i<=317;     i++)
    {
        if(!arr[i][10])
        {
            k = i*i;
            for(j = k;    j <= 100000;   j += k)
                arr[j][10] = 1;
        }
    }

    for(i=1;    i<=100000;  i++)
    {
        if(!arr[i][10])
        {
            temp = i;   int digit[10]={0};

            while(temp)
            {
                digit[temp%10] = 1;
                temp /= 10;
            }

            for(j=0;    j<10;   j++)
                arr[i][j] = digit[j] + arr[i-1][j];
        }

        else
        {
            for(j=0;    j<10;   j++)
                arr[i][j] = arr[i-1][j];
        }
    }

    scanf("%i",&n);

    while(n--)
    {
        scanf("%i%i%d",&a,&b,&d);   int flag =0;

        c = arr[b][d] - arr[a][d];

        if(!arr[a][10])
            while(a)
            {
                if(a%10 == d)
                {
                    flag = 1; break;
                }
                a /= 10;
            }

        printf("%i\n",c+flag);
    }
    return 0;
}
