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

int main()
{
    int i=-1,temp,n,sum=0;

    scanint(n);

    while(++i < n)
    {
        scanint(temp);
        sum ^= temp;
    }

    printf("%i\n",sum);

}
