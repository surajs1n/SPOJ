#include<stdio.h>
#include<string.h>
#define C(y) strcmp(ch,y)

int main()
{
    int t;  char str[200],ch[100],k;

    scanf("%i%c",&t,&k);

    while(t--)
    {
        int sum=0,i,j,f=0;

        gets(str);

        for(i=0;str[i]!=0; )
        {
            for(j=-1;str[i]!=32&&str[i]!=0;)
                ch[++j]=str[i++];

            ch[++j]=0;
            if(str[i]!=0)
                i++;

            if(!C("one"))
                sum += 1;
            else if(!C("two"))
                sum += 2;
            else if(!C("three"))
                sum += 3;
            else if(!C("four"))
                sum += 4;
            else if(!C("five"))
                sum += 5;
            else if(!C("six"))
                sum += 6;
            else if(!C("seven"))
                sum += 7;
            else if(!C("eight"))
                sum += 8;
            else if(!C("nine"))
                sum += 9;
            else if(!C("ten"))
                sum += 10;
            else if(!C("eleven"))
                sum += 11;
            else if(!C("twelve"))
                sum += 12;
            else if(!C("thirteen"))
                sum += 13;
            else if(!C("fourteen"))
                sum += 14;
            else if(!C("fifteen"))
                sum += 15;
            else if(!C("sixteen"))
                sum += 16;
            else if(!C("seventeen"))
                sum += 17;
            else if(!C("eighteen"))
                sum += 18;
            else if(!C("nineteen"))
                sum += 19;
            else if(!C("twenty"))
                sum += 20;
            else if(!C("thirty"))
                sum += 30;
            else if(!C("forty"))
                sum += 40;
            else if(!C("fifty"))
                sum += 50;
            else if(!C("sixty"))
                sum += 60;
            else if(!C("seventy"))
                sum += 70;
            else if(!C("eighty"))
                sum += 80;
            else if(!C("ninety"))
                sum += 90;
            else if(!C("hundred"))
            {
                if(f)
                {
                   sum += 99*(sum%10);
                }
                else
                    sum *= 100;
            }
            else if(!C("thousand"))
            {
                sum *= 1000; f=1;
            }
        }

        printf("%i\n",sum);
    }

    return 0;

}
