#include<stdio.h>

int main()
{
    char str[2001],stk[2001];   int top,round=1;

    while(1)
    {
        scanf("%s",str);    int i,flag = 0,inc=0;

        if(str[0] == '-')
            exit(0);

        top = 0;

        stk[top] = str[0];

        for(i=1;    str[i]!=0;    i++)
        {
            if(str[i]=='}')
            {
                if(stk[top]=='{')
                    top--;

                else
                    stk[++top] = str[i];
            }

            else
            {
                stk[++top] = str[i];
            }
        }

        for(i=0;    i<=top;     i+=2)
        {
            if(stk[i] == '}' && stk[i+1] == '{')
                inc += 2;

            else
                inc++;

        }

        printf("%i. %i\n",round,inc);
        round++;
    }

    return 0;
}
