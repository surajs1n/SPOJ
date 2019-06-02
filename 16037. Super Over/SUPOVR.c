#include<stdio.h>

int main()
{
    char run[100];      int b[3]={0},i,j=0,k=1,temp,flag=1;

    gets(run);

    for(i=0;    run[i]!=0;  i++)
    {
        if( run[i]=='N' || run[i] == 'W' || run[i] == 32)
            continue;

        else if(run[i]=='O')
        {
            j=2;
            flag--;
            if(flag==-1)
                break;
            continue;
        }
        else if((run[i]-48)%2==0)
            b[j] += run[i]-48;

        else if((run[i]-48)%2!=0)
        {
            b[j] += run[i]-48;
            temp = j;
            j = k;
            k =temp;
        }

    }
    printf("%i\n%i\n%i\n",b[0],b[1],b[2]);
    return 0;
}
