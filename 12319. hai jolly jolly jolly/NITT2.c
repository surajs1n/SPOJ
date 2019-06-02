#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int div_4=0,div_3=0,div_7=0,div_9=0,div_25=0,i,j=0,temp,mod[6]={1,3,2,6,4,5};
        char  *num;     long long sum=0;

        num = (char *)malloc(sizeof(char)*50001);

        scanf("%s",num);

        for(i=0;    num[i]!=0;    i++)
            sum += num[i]-48;

        if(sum%9==0)
            div_9=div_3=1;

        else if(sum%3==0)
            div_3=1;

        temp = (num[i-2]-48)*10 + (num[i-1]-48);

        if(temp%4==0)
            div_4=1;

        if(temp%25==0)
            div_25=1;

        sum=0;

        for(i--;    i>=0;   i--)
        {
            j %= 6;
            sum += (num[i]-48)*mod[j++];
            if(sum>=7)
            {
                sum %= 7;
            }
        }

        if(sum==0)
            div_7=1;

        {
            if(div_4==1 && div_9==1 && div_7==1)
                printf("Yes ");
            else
                printf("No ");
       }

       {
            if(div_3==1 && div_7==1 && div_25==1)
                printf("Yes\n");
            else
                printf("No\n");
       }
        free(num);
    }
    return 0;
}
