#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t;          char ch;

    scanf("%i%c",&t,&ch);

    while(t--)
    {
        char *str;      int i,big=-1,similar=0,alpha[26]={0},ptr,temp;

        str = (char *)malloc(sizeof(char)*1001);

        gets(str);

        for(i=0;    str[i]!=0;      i++)
            if(str[i]!=32)
                alpha[str[i]-65]++;

        for(i=0;    i<26;   i++)
        {
            if(big<alpha[i])
            {
                similar = 0;
                big = alpha[i];
                ptr = i;
            }

            else if(big == alpha[i])
                similar = 1;
        }

        if(similar == 1)
            printf("NOT POSSIBLE\n");

        else
        {
           if(ptr>=4)
                ptr -= 4;
           else
                ptr += 22;

           printf("%i ",ptr);

           for(i=0; str[i]!=0;  i++)
           {
                if(str[i]!=32)
                {
                      temp = (str[i]-65)-ptr;

                      if(temp<0)
                        temp = 26+temp;

                        printf("%c",temp+65);
                }

                else
                    printf(" ");
           }
            printf("\n");
        }

        free(str);
    }
    return 0;
}
