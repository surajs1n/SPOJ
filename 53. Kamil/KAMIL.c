#include<stdio.h>
int main()
{
int c=10;
while(c--)
{
char ch[21]; int i=-1,n=1;
scanf("%s",ch);
while(ch[++i]!=0)
if(ch[i]==84||ch[i]==68||ch[i]==76||ch[i]==70)
n<<=1;
printf("%i\n",n);
}
return 0;
}
