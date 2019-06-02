#include<stdio.h>
#include<stdlib.h>


int main()
{
    char *str,*out;

    str = (char *)malloc(sizeof(char)*101);
    out = (char *)malloc(sizeof(char)*202);

    while(scanf("%s",str) != EOF)
    {
        int i=0,j=0,flag=1,undervar=0,alphavar=0;

        for(i=0;    str[i]!=0;     i++)
        {
            if(str[i]=='_')
            {
                undervar=1;
                if(str[i+1]=='_')
                    alphavar=1;
            }
            else if(str[i]>=65&&str[i]<=90)
                alphavar=1;
        }

        if(undervar==1 && alphavar==1 || !(str[0]>=97 && str[0]<=122) || str[i-1]=='_')
        {
            printf("Error!\n");     flag=0;
        }

        else if(undervar==1)
        {
            for(i=0;   str[i]!=0;  )
            {
                if(str[i]=='_')
                {
                    out[j++]=str[++i]-32;   i++;
                }
                else
                    out[j++]=str[i++];
            }
        }

        else if(alphavar==1)
        {
            for(i=0;    str[i]!=0;      )
            {
                if(str[i]>=65&&str[i]<=90)
                {
                    out[j++]='_';   out[j++]=str[i++]+32;
                }

                else
                    out[j++]=str[i++];
            }
        }

        else
            for(i=0;    str[i]!=0;  i++)
                out[j++]=str[i];
        out[j]=0;

        if(flag==1)
            printf("%s\n",out);
    }
    free(str);  free(out);
    return 0;
}
