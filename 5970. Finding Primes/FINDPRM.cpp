#include <stdio.h>
#include <math.h>
#define LIMIT 10000000

int hold[LIMIT + 5] = {0};

int main() {

    int i,j,k;

    int sqt = sqrt(LIMIT);

    for(i=4;    i<=LIMIT;   i += 2) {
        hold[i] = 1;
    }

    for(i=3;    i<=sqt;     i += 2) {
        if(!hold[i]) {
            for(j=i*i,k = 2*i;  j<=LIMIT;   j += k) {
                hold[j] = 1;
            }
        }
    }

    for(i=2;    i<=LIMIT;   i++) {
        if(hold[i]) {
            hold[i] = hold[i-1];
        }

        else {
            hold[i] = hold[i-1] + 1;
        }
    }


    scanf("%i",&k);

    while(k--) {
        scanf("%i",&i);
        printf("%i\n",hold[i] - hold[i/2]);
    }

    return 0;
}
