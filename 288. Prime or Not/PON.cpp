#include<bits/stdc++.h>

int number[1000005] = {0};

unsigned long long mod_it(unsigned long long a,unsigned long long b,unsigned long long MOD) {

    unsigned long long x = 0,y = a % MOD;

    while (b > 0)
    {
        if (b % 2 == 1) {
            x = (x + y) % MOD;
        }
        y = (y * 2) % MOD;
        b /= 2;
    }
    return x % MOD;
}

unsigned long long cal(unsigned long long a,unsigned long long b,unsigned long long MOD) {

    if(b == 0) {
        return 1;
    }

    unsigned long long y = cal(a,b/2,MOD);
    y = mod_it(y,y,MOD);

    if(b&1) {
        y = mod_it(a,y,MOD);
    }

    return y;

}

int main() {

    int t,i,j,k;  unsigned long long num;

    for(i=4;    i<=1000000;     i += 2)
        number[i] = 1;

      // printf("dsjfsk\n");

    for(i=3;    i<=1000;    i += 2) {
        if(number[i] == 0) {
            for(j=i*i,k=2*i;    j <= 1000000;    j += k) {
                number[j] = 1;
            }
        }
    }

   // printf("dsjfsk\n");

    scanf("%i",&t);

    while(t--) {
        scanf("%llu",&num);

        if(num <= 1000000) {
            if(number[num]) {
                printf("NO\n");
            }

            else {
                printf("YES\n");
            }
        }

        else {

            for(i=0;    i<10;   i++) {
                unsigned long long temp = ( rand() % (num - 1) ) + 1;

                if(cal(temp,num-1,num) != 1) {
                    break;
                }
            }

            if(i == 10) {
                printf("YES\n");
            }

            else {
                printf("NO\n");
            }
        }
    }

    return 0;
}
