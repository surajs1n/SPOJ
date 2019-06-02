#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%i",&t);
    while(t--)
    {
            char *num;  int a,i,c,arr[20],j=-1;
            num = (char *)malloc(sizeof(char)*1001);
            long long b,pro=1;

            scanf("%s%lld",num,&b);

            for(i=0;    num[i]!=0;  i++);

            a = num[--i]- 48;

           // printf("%i",a);

            free(num);

            while(b)
            {
                c = b%18;
                pro=1;

                while(c--)
                    pro *= a;

                arr[++j] = pro%10;

                b = b/18;

                if(b)
                {
                    int fg=18;
                    pro = 1;
                    while(fg--)
                    {
                        pro *= a;
                    }

                    a = pro%10;
                }
            }
            pro = 1;j++;

            while(j--)
                pro *= arr[j];

            printf("%i\n",(pro%10));
    }
    return 0;
}
