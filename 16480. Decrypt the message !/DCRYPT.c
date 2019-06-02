#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        unsigned char str[100000];

        int key,i,invert;

        scanf("%i %s",&key,str);

        invert = key / 26;

        key = key % 26;

        if(invert == 0)
        {
            for(i=0;    str[i]!=0;    i++)
            {
                if(str[i] == '.')
                    str[i] = 32;

                else if(str[i] >= 'a'  &&   str[i] <= 'z')
                {
                    str[i]  +=  key;

                    if(str[i]>'z')
                        str[i]  -=  26;
                }

                else
                {
                    str[i]  +=  key;

                    if(str[i]>'Z')
                        str[i]  -=  26;
                }
            }
        }

        else
        {
            for(i=0;    str[i]!=0;    i++)
            {
                if(str[i] == '.')
                    str[i] = 32;

                else if(str[i]>='a' &&   str[i]<='z')
                {
                    str[i] -= 32;
                    str[i] += key;

                    if(str[i]>'Z')
                        str[i] -= 26;
                }

                else
                {
                    str[i] += 32;
                    str[i] += key;

                    if(str[i]>'z')
                        str[i] -= 26;
                }
            }
        }

        puts(str);

    }

    return 0;
}
