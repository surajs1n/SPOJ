#include <stdio.h>

int main() {

    int t,n,i,j,result;

    scanf("%i",&t);

    while(t--) {
        scanf("%i",&n);

        result = n;

        for(i=2;    i*i<=n;  i++) {
            if(n % i == 0 ) {
                result = result - result/i;
            }

            while(n % i == 0) {
                n /= i;
            }
        }

        if( n > 1) {
            result = result - result/n;
        }

        printf("%i\n",result);
    }
    return 0;
}
