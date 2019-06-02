#include <stdio.h>

int prime[78500],prime_index = -1;
bool number[1000005] = {0};

int main() {

    int i,j,k,t;    long long num;

    prime[++prime_index] = 2;

    for(i=3;    i<=1000;    i += 2) {
        if(number[i] == 0) {
            prime[++prime_index] = i;

            for(j = i*i,    k = 2*i;    j<=1000000;     j += k) {
                number[j] = i;
            }
        }
    }

    for(;   i<=1000000;     i+= 2) {
        if(number[i] == 0) {
            prime[++prime_index] = i;
        }
    }

//    printf("%i %i\n",prime_index,prime[prime_index]);

    scanf("%i",&t);

    while(t--) {
        scanf("%lld",&num);

        if(num == 0) {
        	printf("Yes\n");
        	continue;
       }

        int flag = 1;

        for(i=0;    1LL * prime[i]*prime[i] <= num;     i++) {

            int count = 0;

            while(num % prime[i] == 0) {
                count++;
                num /= prime[i];
            }

            if(count%2  && prime[i]%4 == 3) {
                flag = 0;
                break;
            }
        }

        if(num%4 == 3) {
            flag = 0;
        }

        if(flag) {
            printf("Yes\n");
        }

        else {
            printf("No\n");
        }

    }

    return 0;
}
