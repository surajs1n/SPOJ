#include<stdio.h>
#define m1 186583
#define m2 587117
#define m 109546051211LL

int main() {

    long long k1 = 97830131476LL;
    long long k2 = 11715919736LL;

    long long fac_1 = 1;
    long long pro_1 = 1;

    long long fac_2 = 1;
    long long pro_2 = 1;

    int count,i;

    scanf("%i",&count);

    for(i=2;    i<=count;   i++) {

        fac_1 = (fac_1 * i) % m1;
        pro_1 = (pro_1 * fac_1) % m1;

        fac_2 = (fac_2 * i) % m2;
        pro_2 = (pro_2 * fac_2) % m2;

    }

    printf("%lli\n",(pro_1*k1 + pro_2*k2)%m);

    return 0;
}
