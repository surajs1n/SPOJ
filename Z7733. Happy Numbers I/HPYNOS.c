#include<stdio.h>

int main()
{
    int n,temp,c=0,flag=1,index=0,arr[10000],i;

    scanf("%i",&n);

    while(n != 1)
    {

        int sum = 0;

        while(n)
        {
            sum += (n%10)*(n%10);
            n /= 10;
        }

        temp = sum;
        c++;

        for(i=0;    i<index;    i++)
        {
            if(arr[i]==temp)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 0)
                break;

        arr[index++] = temp;
        n = temp;
    }

    if(flag == 0)
        printf("-1\n");

    else
        printf("%i\n",c);

    return 0;
}
