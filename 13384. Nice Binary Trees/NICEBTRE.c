#include<stdio.h>

int main()
{
    int t,index=-1,maxi=-10,i,c=0;   char str[10001],stk[10001],ch;

    scanf("%i%c",&t,&ch);

    while(t--)
    {
        scanf("%s",str);    index = -1; maxi=-10,c=0;

        if(str[0] == 'l' && str[1] == 0)
            maxi = 0;

        else
        {
            stk[++index] = str[0];
            for(i=1;    str[i]!=0;      i++)
            {
                if(stk[index] == 'n')
                {
                    stk[++index] = str[i];

                    if(stk[index] == 'n')
                        c++;

                    if(c > maxi)
                        maxi = c;
                }

                else
                {
                    c++;

                    if(c > maxi)
                        maxi = c;

                    stk[++index] = str[i];

                    if(stk[index] == 'l')
                        c--;

                    while(stk[index]=='l' && stk[index-1]=='l')
                    {
                        index -= 2;     c--;
                        stk[index] = 'l';
                    }

                }
            }
        }

        printf("%i\n",maxi);
    }

    return 0;

}
