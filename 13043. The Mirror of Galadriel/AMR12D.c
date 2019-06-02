#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        char str[11];   int i,j=0,flag=1;

        scanf("%s",str);

        for(i=0;    str[i]!=0;  i++);
        i--;

        while(j<i)
        {
                if(str[i--]!=str[j++])
                    flag=0;
        }

        if(flag==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
