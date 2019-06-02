#include<stdio.h>
#define gc getchar_unlocked
inline void scanint(int &x)
{
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}

int main()
{
    int t,n,i,j;

    scanint(t);

    while(t--)
    {
        int arr[301]={0},flag = 0 ;

        scanint(n);

        while(1)
        {
            scanint(i);
            scanint(j);

            if(i == -1 && j == -1)
                break;

            arr[i]++;
            arr[j]++;
        }

        i=0;

        while(++i < 301)
            if(arr[i]&1)
            {
                flag = 1;
                break;
            }

        if(flag)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}
