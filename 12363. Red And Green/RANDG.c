#include<stdio.h>

int main()
{
    char str[51];

    while(scanf("%s",str)!=EOF)
    {
        char ch[51];     int i,j=-1,mini=132323,len=0,con=0;
        ch[50] = 0;

        for(len=0;  str[len]!=0;    len++)
            ch[len]='G';
        len++;

        while(len--)
        {
            if(j!= -1)
                ch[j] = 'R';

            con=0;  j++;
            for(i=0;    str[i]!=0;  i++)
                if(ch[i] != str[i])
                    con++;

            if(mini > con)
                mini = con;

        }

        printf("%i\n",mini);
    }

    return 0;

}
