#include<stdio.h>

int main()
{
      char ch[] = {'m','a','n','k','u'};
      int t;

      //    Enter no. of cases

      scanf("%i",&t);

      // loop for t terms

      while(t--)
      {
	    long long n;
	    int i=-1,    rev[30]={0},   rem,j=0;

	    scanf("%lld",&n);


        while(n)
        {
            if(n%5!=0)
            {
                rem =  (int)(n%5);
                n /= 5;
                rev[++i] = rem-1;

            }
            else
            {
                n--;
                n /= 5;
                rev[++i] = 4;
            }
        }

        do
        {
              printf("%c",ch[rev[i--]]);
        }while(i>=0);

	    printf("\n");
      }
      return 0;
}
