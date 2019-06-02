#include<stdio.h>

int main()
{
    char str[21];
    scanf("%s",str);

    while(str[0]!='*' || str[1]!=0)
    {
        int arr[20],i,j=-1,flag=1;      long long a,b,temp,temp_a;

        for(i=0;    str[i]!=0;  i++)
            if(str[i]=='Y')
                arr[++j]=i+1;

        a=arr[0];

        for(i=1;    i<=j;    i++)
        {
            b = arr[i];     temp_a = a;

            if(a>b){   temp=a;  a=b;    b=temp;}

            while(a)
            {
                temp = a;
                a = b%a;
                b = temp;
            }

            a = temp_a*arr[i]/b;

        }

        for(i=0;    str[i]!=0;  i++)
            if(str[i]=='N')
                if(a%(i+1)==0)
                {
                    flag=0; break;
                }

        if(flag==0)
            printf("-1\n");

        else
            printf("%lld\n",a);

        scanf("%s",str);
    }
    return 0;
}
