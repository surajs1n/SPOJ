#include<stdio.h>

int arr[1001][1010]={0};

int main()
{
    int i,j,k,t,n,index,hold,carry;

    arr[2][0] = 5;

    i = 2;
    while(++i < 1001)
    {
        j = -1; carry = 0;

        while(++j < 1100)
        {
            hold = carry*10 + arr[i-1][j];

            if(hold >= 2)
            {
                arr[i][j] = hold>>1;
                carry = hold&1;
            }

            else
                carry = hold;
        }
    }

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i",&n);

        if(n == 1)
        {
            printf("1\n");
            continue;
        }

        printf("0.");

        index = 1010;
        while(--index >= 0)
        {
            if(arr[n][index])
                break;
        }

        i = -1;
        while(++i <= index)
            printf("%i",arr[n][i]);

        printf("\n");
    }
    return 0;
}
