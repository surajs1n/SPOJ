#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        char ch[41];    int i,num[8]={0},n;

        scanf("%i",&n);

        scanf("%s",ch);

        for(i=0;    i<38;    i++)
        {
            if(ch[i] == 'T' && ch[i+1] =='T' && ch[i+2] =='T' )
                num[0]++;

            else if(ch[i] == 'T' && ch[i+1] =='T' && ch[i+2] =='H' )
                num[1]++;

            else if(ch[i] == 'T' && ch[i+1] =='H' && ch[i+2] =='T' )
                num[2]++;

            else if(ch[i] == 'T' && ch[i+1] =='H' && ch[i+2] =='H' )
                num[3]++;

            else if(ch[i] == 'H' && ch[i+1] =='T' && ch[i+2] =='T' )
                num[4]++;

            else if(ch[i] == 'H' && ch[i+1] =='T' && ch[i+2] =='H' )
                num[5]++;

            else if(ch[i] == 'H' && ch[i+1] =='H' && ch[i+2] =='T' )
                num[6]++;

            else
                num[7]++;
        }

        printf("%i %i %i %i %i %i %i %i %i \n",n,num[0],num[1],num[2],num[3],num[4],num[5],num[6],num[7]);

    }
    return 0;
}
