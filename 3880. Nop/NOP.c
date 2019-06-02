#include<stdio.h>

int main()
{
    char str[201];      int i,j=0,count_terms=0;

    gets(str);

    for(i=1;    str[i]!=0;  i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
                if((i-j)%4!=0)
                count_terms += (4-(i-j)%4);  j=i;
        }
    }

    printf("%i\n",count_terms);

    return 0;
}
