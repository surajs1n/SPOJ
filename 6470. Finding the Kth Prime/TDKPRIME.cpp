#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MOD 10000

int prime[5010000],prime_index = 0;

int main() {

    int i,j,k;

    prime[++prime_index] = 2;

    int upper = MOD, lower = 1,sqt;
    sqt = sqrt(upper);

    int num[MOD + 1] = {0};

    for(i=3;    i<=sqt;     i+=2) {
        if(num[i] == 0) {
            prime[++prime_index] = i;

            for(j=i*i, k = 2*i;     j<=MOD;     j += k) {
                num[j] =1;
            }
        }
    }


    for(;   i<=MOD;  i += 2) {
        if(num[i] == 0) {
            prime[++prime_index] = i;
        }
    }

   // printf("%i %i\n",prime[prime_index],prime_index);

    lower += MOD;
    upper += MOD;

    while(upper <= 86100000) {

        int number[MOD + 1] = {0};
        sqt = sqrt(upper);

        for(i=1;    prime[i]<=sqt;  i++) {

            j = (lower%prime[i]) ?  (lower + prime[i] - lower%prime[i]): lower;

            for(;   j<=upper;   j += prime[i]) {
                number[j - lower] = 1;
            }
        }

        for(i=0;    i<MOD;   i++) {
            if(number[i] == 0) {
                prime[++prime_index] = i+lower;
            }
        }

        lower += MOD;
        upper += MOD;

    }

    int t;

    scanf("%i",&t);

    while(t--) {
        scanf("%i",&i);
        printf("%i\n",prime[i]);
    }

    return 0;
}
