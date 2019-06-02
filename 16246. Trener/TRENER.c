#include<stdio.h>

int main()
{
    int n,i,arr[26]={0},flag = 1;    char name[31],ch;

    scanf("%i",&n);

    while(n--)
    {
        scanf("%s",name);

        arr[name[0] - 97]++;
    }

    for(i=0;    i<26;    i++)
    {
        if(arr[i] >= 5)
        {
            flag = 0;
            printf("%c",97+i);
        }
    }

    if(flag == 1)
        printf("PREDAJA");

    printf("\n");

    return 0;
}
