#include<stdio.h>
char str[120001],stack[120001];

int main()
{
    int t,i,j,point;  char ch;

    scanf("%i%c",&t,&ch);

    for(j=1;    j<=t;   j++)
    {
        gets(str);

        i = point = -1;

        while(str[++i] != 0)
        {
            stack[++point] = str[i];

            if(point >= 2 && stack[point] == '0' && stack[point - 1] == '0' && stack[point - 2] == '1')
                point -= 3;
        }

        if(point == -1)
            printf("Case %d: yes\n",j);
        else
            printf("Case %d: no\n",j);
    }

    return 0;
}
