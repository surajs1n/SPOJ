#include<stdio.h>
#define LIM 1000000
int etf[1000005],an[1000005] = {0};

int main() {

    int i,j,k,n;

    for(i=1;    i<=LIM;     i++) {
        etf[i] = i;
    }

    for(i=2;    i<=LIM;     i++) {
        if(etf[i] == i) {
            etf[i] = i-1;
            for(j = 2*i;    j<=LIM; j += i) {
                etf[j] -= etf[j]/i;
            }
        }
    }

    for(i=1;    i<=LIM;  i++) {
        for(j = i;    j<=LIM;     j += i) {
            an[j] += i*etf[i];
        }
    }

    scanf("%i",&n);

    while(n--) {

        scanf("%i",&i);

        printf("%lli\n",((an[i] + 1) * i)>>1);
    }

    return 0;
}
