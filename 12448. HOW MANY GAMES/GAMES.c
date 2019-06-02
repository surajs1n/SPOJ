#include<stdio.h>
#include<math.h>

int main()
{
    int t;  char ch;

    scanf("%i%c",&t,&ch);

    while(t--)
    {
        int num=0,flag = 0,th=10000,temp,turn=0;    char c;

        while(1)
        {
            scanf("%c",&c);

            if(c == 10 || c==32)
                break;

            if(flag == 1)
            {
                num = num*10 + (c-48);
                turn++;
            }

            if(c == '.')
                flag = 1;
        }

        num *= pow(10,4-turn);

        while(num)
        {
            temp = th;
            th = num;
            num = temp % num;
        }

        printf("%i\n",10000/th);
    }

    return 0;

}
