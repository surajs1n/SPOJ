#include<stdio.h>

int main()
{
    int i,j,arr[26]={11,12,13,14,15,21,22,23,24,24,25,31,32,33,34,35,41,42,43,44,45,51,52,53,54,55};    char str[1000],c;

    scanf("%i%c",&j,&c);

    while(j--)
    {
        gets(str);

        i = -1;
        while(str[++i])
        	if(str[i] != 32)
            	printf("%i ",arr[str[i] - 65]);

        printf("\n");
    }
}
