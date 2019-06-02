#include<stdio.h>

struct node
{
    int n,k,res;
}obj[100005];

int top = 0;

int main()
{
    int t,n;

    scanf("%i",&t);

    while(t--)
    {
        int k = 0,hold_n;

        scanf("%i",&n);

        obj[++top].n = hold_n = n;
        obj[top].k = ++k;

        while(--n)
        {
            obj[++top].n = n;
            obj[top].k = ++k;
        }

        obj[top].res = 1;

        while(--top)
        {
            obj[top].res = (( obj[top+1].res + obj[top].k - 1 ) % obj[top].n + 1);
        }

        printf("%i\n",obj[top+1].res);
    }

    return 0;
}
