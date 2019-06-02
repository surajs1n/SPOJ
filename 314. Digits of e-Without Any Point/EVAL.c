#include<stdio.h>

int main()
{
    unsigned int arr[12]={1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600};
    unsigned long   nume;
    char str[15];
    int i=-1;
    double ptr[13],     num=0.0;
    for(i=0;    i<13;   i++)
        ptr[i]=1000000000000000.0;

    for(i=0;    i<12;   i++)
        ptr[i+1] /= arr[i];

    for(i=0;    i<13;   i++)
        num += ptr[i];

    num = num/1000000;
    nume = num;
    i=0;
    while(nume)
    {
        if(i==9)
            str[i++]='.';
        else
        {
            str[i++] = nume%10 + 48;
            nume /= 10;
        }
    }
    while(i>0)
        printf("%c",str[--i]);
    return 0;
}
