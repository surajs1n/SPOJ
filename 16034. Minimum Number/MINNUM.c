#include<stdio.h>

int main()
{
    char num[35];

    scanf("%s",num);

    while( num[0]!='-' || num[1]!='1' )
    {
            int i,j=-1,temp=0,flag=0;      char sub[35];

            if((num[0]=='1'||num[0]=='2'||num[0]=='3'||num[0]=='4'||num[0]=='5'||num[0]=='6'||num[0]=='7'||num[0]=='8'||num[0]=='9')&&(num[1]==0))
                printf("1\n");

            else if((num[0]=='0')&&num[1]==0)
                printf("0\n");

            else
            {
                flag=1;
                for(i=0;    num[i]!=0;  i++)
                {

                    temp = temp*10+(num[i]-48);

                    while(temp<9)
                    {
                        if(num[i+1]==0)
                            break;
                        else
                        {
                             sub[++j]=48;
                             temp = temp*10+(num[++i]-48);
                        }
                    }

                    sub[++j] = (char)((temp/9)+48);

                    temp %=9;

                }
            }

            sub[j+1]=0;

            if(temp!=0)
            {
                temp=1;
                while(j>=0)
                {
                    temp  += (sub[j]-48);

                    sub[j--] = (temp%10+48);

                    temp /= 10;
                }
            }

            if(flag==1)
            {
                if(sub[0]!='0')
                    printf("%c",sub[0]);
                for(i=1;    sub[i]!=0;  i++)
                    printf("%c",sub[i]);
                printf("\n");
            }

            scanf("%s",num);
    }
    return 0;
}
