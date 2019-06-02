#include<iostream>
#include<stdio.h>
using namespace std;
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

int arr[1000000];

int main()
{
    long long hold; int h,i,j,n,m,upper = -1,lower = 0,mid,flag = 0,last_lower = -1;

    scanint(n); scanint(m);

    i = -1;

    while( ++i<n )
    {
        scanint(arr[i]);

        if(upper < arr[i])
            upper = arr[i];
    }

    while(lower < upper)
    {
        mid = (upper + lower)>>1;

        if(last_lower == mid)
            break;

        i=-1;   hold = 0;
        while(++i < n)
        {
            if(arr[i] > mid)
            hold += (arr[i] - mid);
        }

        if(hold < m)
            upper = mid;

        else if(hold == m)
            break;

        else
        {
            lower = mid;
            last_lower = mid;
        }

    }

    printf("%i\n",mid);

    return 0;
}
