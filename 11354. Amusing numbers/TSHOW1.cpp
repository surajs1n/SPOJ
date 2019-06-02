#include<stdio.h>

int main()
{
      char ch[] = {'5','6'};
      int t;

      //    Enter no. of cases

      scanf("%i",&t);

      // loop for t terms

      while(t--)
      {
	    long long n;
	    int i=-1,    rev[100005]={0},   rem,j=0;

	    scanf("%lld",&n);


        while(n)
        {
            if(n%2!=0)
            {
                rem =  (int)(n%2);
                n /= 2;
                rev[++i] = rem-1;

            }
            else
            {
                n--;
                n /= 2;
                rev[++i] = 1;
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
