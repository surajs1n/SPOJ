#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MOD 10000

int num[10000005] = {0},prime[664580],prime_index = 0;

int main() {

    int i,j,k,n;

    //memset(num,1,10000005);

    prime[++prime_index] = 2;

    int upper = MOD, lower = 1,sqt;
    sqt = sqrt(upper);

    for(i=1;    i<=10000000;    i++) {
        num[i] = 1;
    }

    for(i=4;    i<=10000000;    i += 2) {
        num[i] = 2;
    }

    for(i=3;    i<=sqt;     i+=2) {
        if(num[i] == 1) {
            prime[++prime_index] = i;
            for(j=i*i, k = 2*i;     j<=MOD;     j += k) {
                if(num[j] == 1) num[j] = i;
            }
        }
    }

    for(;   i<=MOD;   i += 2) {
        if(num[i] == 1) {
            prime[++prime_index] = i;
        }
    }

   // printf("%i %i\n",prime[prime_index],prime_index);

    lower += MOD;
    upper += MOD;

    while(upper <= 10000000) {

        sqt = sqrt(upper);

        for(i=2;    prime[i]<=sqt;  i++) {

            j = (lower%prime[i]) ?  (lower + prime[i] - lower%prime[i]): lower;

            for(k = prime[i];   j<=upper;   j += k) {
                if(num[j]==1)  num[j] = prime[i];
            }
        }

        for(i=lower;    i<=upper;   i += 2) {
            if(num[i] == 1) {
                prime[++prime_index] = lower;
            }
        }

        lower += MOD;
        upper += MOD;
    }

    //printf("%i",prime_index);

    while(scanf("%i",&n) != EOF) {

        printf("1");

        while(n != 1) {
            if(num[n] != 1) {
                printf(" x %i",num[n]);
                n /= num[n];
            }

            else {
                printf(" x %i",n);
                break;
            }
        }

        printf("\n");
    }

    return 0;
}

