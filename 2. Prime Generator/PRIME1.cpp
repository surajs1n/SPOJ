#include<stdio.h>
#include<math.h>

int num[32000] = {0},prime[3500],prime_index = -1;

int main() {

    prime[++prime_index] = 2;

    int i,j,k;

    for(i=3;    i<179;     i += 2) {
        if(num[i] == 0) {
            prime[++prime_index] = i;

            for(j = i*i, k = 2*i;    j<=32000;   j += k) {
                num[j] = 1;
            }
        }
    }

    for(;   i<=32000;   i+= 2) {
        if(num[i] == 0) {
            prime[++prime_index] = i;
        }
    }

  //  printf("%i %i\n",prime[prime_index],prime_index);

    int t,m,n;

    scanf("%i",&t);

    while(t--) {
        scanf("%i%i",&m,&n);

        if(m == 1)
            m++;

        if(m == 2 && m <= n) {
            printf("2\n");
        }

        int sqt = sqrt(n) + 1,arr[100005] = {0};

        for(i=0;    i<=prime_index; i++) {
            if(prime[i] > sqt) {
                sqt = i;
                break;
            }
        }

        for(;   m<=n && m <= prime[prime_index];   m++) {
            if(m&1 && num[m] == 0) {
                printf("%i\n",m);
            }
        }

        for(i=0;    i<=sqt;     i++) {
            j = prime[i] * (m / prime[i]);

            if(j < m) {
                j += prime[i];
            }

            for(k=j;    k<=n;   k += prime[i]) {
                arr[k-m] = 1;
            }
        }

        for(i=0;    i<=n-m; i++) {
            if(!arr[i]) {
                printf("%i\n",m+i);
            }
        }

        printf("\n");
    }
    return 0;
}
