#include<stdio.h>

int main()
{
    int a=0,c=0,i,flag=0,arr[10],temp,j=0,z,k;

    for(i=1000;    i<100000;   i++)
    {
        flag = j = 0;

        temp = i;

        if(i/10000 == 0)
            arr[j++] = 0;

        while(temp)
        {
            arr[j++] = temp%10;
            temp /= 10;
        }

        for(k=0;    k<j-1;  k++)
            for(z=k+1;  z<j;    z++)
                if(arr[k] == arr[z])
                    flag = 1;

        if(!flag)
            if(i%495 == 0)
                c++;

    }

    printf("%i\n",c);
    return 0;
}
