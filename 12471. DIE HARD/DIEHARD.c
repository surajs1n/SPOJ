#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int H,A,n=0;        char ch='f';

        scanf("%i%i",&H,&A);

        while(1)
        {
                if(ch=='a')
                {
                        if(H>5 && A>10)
                        {
                            H -= 5;     A -= 10;    n++;    ch='w';
                        }

                        else if(H>20)
                        {
                            H -= 20;    A += 5;     n++;    ch='f';
                        }

                        else
                            break;
                }
                else
                {
                   H += 3;     A += 2;
                   ch = 'a';    n++;
                }
        }

        printf("%i\n",n);
    }
    return 0;
}
