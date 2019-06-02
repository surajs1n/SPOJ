#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MOD 10000

int prime[6000000],prime_index = 0;

int main() {

    int i,j,k;

    prime[++prime_index] = 2;
    printf("2\n");

    int upper = MOD, lower = 1,sqt;
    sqt = sqrt(upper);

    int num[MOD + 1] = {0};

    for(i=3;    i<=sqt;     i+=2) {
        if(num[i] == 0) {
            prime[++prime_index] = i;
            if(prime_index%100 == 1) {
                printf("%i\n",prime[prime_index]);
            }

            for(j=i*i, k = 2*i;     j<=MOD;     j += k) {
                num[j] =1;
            }
        }
    }


    for(;   i<=MOD;  i += 2) {
        if(num[i] == 0) {
            prime[++prime_index] = i;
            if(prime_index%100 == 1) {
                printf("%i\n",prime[prime_index]);
            }
        }
    }

   // printf("%i %i\n",prime[prime_index],prime_index);

    lower += MOD;
    upper += MOD;

    while(upper <= 100000000) {

        int number[MOD + 1] = {0};
        sqt = sqrt(upper);

        for(i=2;    prime[i]<=sqt;  i++) {

            j = (lower%prime[i]) ?  (lower + prime[i] - lower%prime[i]): lower;

            for(k = prime[i];   j<=upper;   j += k) {
                number[j - lower] = 1;
            }
        }

        for(i=0;    i<MOD;   i += 2) {
            if(number[i] == 0) {
                prime[++prime_index] = i+lower;

                if(prime_index%100 == 1) {
                    printf("%i\n",prime[prime_index]);
                }
            }
        }

        lower += MOD;
        upper += MOD;

    }

    return 0;
}
