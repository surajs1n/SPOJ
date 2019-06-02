#include<stdio.h>

char str[505],temp[10];
int arr[20];

int main()
{
    int i,t,j;    char ch;

    scanf("%i%c",&t,&ch);

    while(t--)
    {
        scanf("%s%s",temp,str);

        i= -1;
        while( temp[++i] != 0 )
            arr[i] = temp[i] - 48;

        j = i;

        while(--i >= 0)
            arr[j++] = arr[i];

        i = -1;
        while( str[++i] != 0)
        {
            str[i] -= arr[i%j];

            if(str[i] >= 97 )
                printf("%c",str[i]);

            else
            {
                printf("%c",str[i]+26);
            }
        }
        printf("\n");
    }

    return 0;
}
