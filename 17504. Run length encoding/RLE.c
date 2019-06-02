#include<stdio.h>

int main()
{
    char str[100001],ch;    int i,j;

    while(scanf("%s",str)!=EOF)
    {
        int rep=1;  char hold=str[0];

        for(i=1;    str[i]!=0;      i++)
        {
            if(hold == str[i])
            {
                rep++;
            }

            else
            {
                if(rep>3)
                {
                    printf("%i!%c",rep,hold);
                }
                else
                {
                    switch(rep)
                    {
                        case 3:     printf("%c",hold);
                        case 2:     printf("%c",hold);
                        case 1:     printf("%c",hold);
                    }
                }
                hold = str[i];
                rep = 1;
            }
        }

        if(rep>3)
        {
            printf("%i!%c",rep,hold);
        }
        else
        {
            switch(rep)
            {
                case 3:     printf("%c",hold);
                case 2:     printf("%c",hold);
                case 1:     printf("%c",hold);
            }
        }
        printf("\n");
    }

    return 0;
}
