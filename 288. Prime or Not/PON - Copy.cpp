#include<bits/stdc++.h>

int number[100005] = {0};

int hold[9] = {2, 3, 5, 7, 11, 13, 17, 19, 23};

long long mul(long long a, long long b, long long MOD) {

    long long x = 0, y=a%MOD;

    while ( b > 0 )
    {
        if (b % 2 == 1) {
            x = (x + y) % MOD;
        }
        y = (y * 2) % MOD;
        b /= 2;
    }

    return x % MOD;
}


long long power_it(long long a,long long b,long long MOD) {

    if(b == 0) {
        return 1;
    }

    long long y = power_it(a,b/2,MOD);
    y = mul(y,y,MOD);

    if(b%2) {
        y = mul(y,a,MOD);
    }

    return y;
}


int miller_rabin(long long num) {
        // Do the shit
    if(num % 2 == 0)
        return 0;

    int k = 9, s = 0,i,temp_s;

    long long temp = num - 1,x;

    while(temp%2 == 0) {
        s++;
        temp >>= 1;
    }

    for(i=0;    i<9;    i++) {
        temp_s = s;
        x = power_it(hold[i],temp,num);

        if(x == 1 || x == num -1) {
            continue;
        }

        while(--temp_s) {
            x = mul(x,x,num);

            if(x == 1) {
                return 0;
            }

            if(x == num-1) {
                return 1;
            }
        }

        return 0;
    }

    return 1;
}

int main() {

    int t,i,j,k;  unsigned long long num;

    for(i=4;    i<=100000;     i += 2)
        number[i] = 1;

      // printf("dsjfsk\n");

    for(i=3;    i<=317;    i += 2) {
        if(number[i] == 0) {
            for(j=i*i,k=2*i;    j <= 100000;    j += k) {
                number[j] = 1;
            }
        }
    }

   // printf("dsjfsk\n");

    scanf("%i",&t);

    while(t--) {
        scanf("%llu",&num);

        if(num <= 100000) {
            if(number[num]) {
                printf("NO\n");
            }

            else {
                printf("YES\n");
            }
        }

        else {

            if(miller_rabin(num)) {
            	printf("YES\n");
            }

            else {
            	printf("NO\n");
            }
        }
    }

    return 0;
}
