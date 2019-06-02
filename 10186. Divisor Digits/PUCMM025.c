#include<stdio.h>

int main()
{
    char str[250];      int i,j,k,sum = 0,c,rem[6]={1,3,2,6,4,5};

    while(scanf("%s",str)!=EOF)
    {
        int div[10]={0};    sum = c = 0;

        for(i=0;    str[i]!=0;      i++)
        {
            div[str[i]-48]++;
            sum += (str[i] - 48);
        }

        i--;

        if(div[1])
            c += div[1];
        if(str[i]%2 == 0 && div[2])
            c += div[2];
        if((str[i] == '5' || str[i] == '0') && div[5])
            c += div[5];
        if(sum%3 == 0 && div[3])
            c += div[3];
        if(sum%9 == 0 && div[9])
            c += div[9];
        if(div[6] && str[i]%2 == 0 && sum%3 == 0)
            c += div[6];

        {
            sum = 0;
            if(i>=2)
                sum = ( str[i-2] - 48 )*100 + ( str[i-1] - 48 )*10 + ( str[i] - 48 );

            else if(i)
                sum = (str[i-1] - 48)*10 + (str[i] - 48);

            else
                sum = ( str[i] - 48);

            if(sum%8 == 0 && div[8])
                c += div[8];
            if(sum%4 == 0 && div[4])
                c += div[4];
        }

        sum = 0;    j = 0;

        for(;   i>=0;   i--)
            sum += ((str[i] - 48) * rem[(j++)%6]);

        if(sum%7 == 0   &&  div[7])
            c += div[7];

        printf("%i\n",c);
    }

    return 0;

}
