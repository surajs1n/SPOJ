#include<stdio.h>
#include<stdlib.h>

int main()
{
    while(1)
    {
        char ch,*str;   int i=0,flag=1,k=-1;

        str = (char *)malloc(sizeof(char)*2100);

        gets(str);

        while(str[++k]==32);

        if(str[k]=='*')
            exit(0);

        ch = str[k];

        if(ch>=65 && ch<=90)
            ch += 32;

        for(i=k+1;    str[i]!=0;      i++)
        {
             if(str[i]==32)
             {
                 if( str[i+1]+32 != ch  && str[i+1] != ch)
                    {
                        flag=0;     break;
                    }
             }
        }

        free(str);

        if(flag==1)
            printf("Y\n");

        else
            printf("N\n");
    }
    return 0;
}
