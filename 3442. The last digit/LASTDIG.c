#include<stdio.h>

int main()
{int t;
 scanf("%i",&t);
 while(t--)
 {
  unsigned int a,b,pro=1,c,arr[20]={1}; int j=-1,i;
  scanf("%u%u",&a,&b);
  a %= 10;
  if(b!=0)
  {
  while(b)
  {
   c = b%10;
   unsigned int ab=1,ac=1;
   for(i=0;    i<c;    i++)
    ac *= a;
   ac %= 10;
   arr[++j]=ac;
   b = b-c;
   if(b>=10)
   {
    b /= 10;
    for(i=0;    i<10;    i++)
     ab *= a;
    ab %= 10;
    a = ab;
   }
  }
  do
  {
   pro *= arr[j];
   pro %= 10;
   }while(j--);
  }

   printf("%u\n",pro);
 }
 return 0;
}
