#include<stdio.h>

int main()
{
    char in[8],out[8]={0},ch;   int a,b,i,j;

    while(scanf("%s%i%i%c",in,&a,&b,&ch)!=EOF)
    {
        int index=-1,sum=0,rev=6;

        for(i=0;    in[i]!=0;   i++);
            i--;

        for(;    i>=0;   i--)
        {
            if(in[i]=='A'||in[i]=='B'||in[i]=='C'||in[i]=='D'||in[i]=='E'||in[i]=='F')
                j = in[i]-55;

            else
                j = in[i]-48;

            sum += (j*pow(a,++index));
        }

        while(sum)
        {
            j = sum%b;
            sum /= b;
            if(j>9)
                out[rev] = 55+j;

            else
                out[rev] = 48+j;

            if(--rev ==  -1)
                break;
        }

        if(rev == -1 && sum)
            printf("  ERROR\n");

        else
        {
            for(i=0; i<=rev;  i++)
                printf(" ");
            for(;   i<7;    i++)
                printf("%c",out[i]);
            printf("\n");
        }
    }

    return 0;

}
