#include<stdio.h>
#define INF 4611686018427387904

long long min(long long x,long long y) {

    if(x<y) {
        return x;
    }

    else {
        return y;
    }
}

long long arr[2][4],hold[4];

int main() {

    int count = 0,n,i;

    while(++count) {

        scanf("%i",&n);

        arr[0][0] = arr[1][0] = INF;
        arr[0][1] = arr[0][2] = arr[0][3] = 0;

        if(!n) {
            break;
        }

        scanf("%lld%lld%lld",&hold[1],&hold[2],&hold[3]);

        arr[1][1] =  hold[1];
        arr[1][2] =  hold[2];
        arr[1][3] =  hold[2]+hold[3];

        scanf("%lld%lld%lld",&hold[1],&hold[2],&hold[3]);

        arr[0][1] = min(min(arr[0][0],arr[1][0]),arr[1][2]) + hold[1];
        arr[0][2] = min(min(arr[0][1],arr[1][2]),arr[1][3]) + hold[2];
        arr[0][3] = min(min(arr[0][2],arr[1][2]),arr[1][3]) + hold[3];

        for(i=3;    i<=n;   i++) {
            scanf("%lld%lld%lld",&hold[1],&hold[2],&hold[3]);

            if(i&1) {
                arr[1][1] = min(min(min(arr[1][0],arr[0][0]),arr[0][1]),arr[0][2]) + hold[1];
                arr[1][2] = min(min(min(arr[1][1],arr[0][1]),arr[0][2]),arr[0][3]) + hold[2];
                arr[1][3] = min(min(arr[1][2],arr[0][2]),arr[0][3])                + hold[3];
            }

            else {
                arr[0][1] = min(min(min(arr[0][0],arr[1][0]),arr[1][1]),arr[1][2]) + hold[1];
                arr[0][2] = min(min(min(arr[0][1],arr[1][1]),arr[1][2]),arr[1][3]) + hold[2];
                arr[0][3] = min(min(arr[0][2],arr[1][2]),arr[1][3])                + hold[3];
            }

          //  printf("%lld %lld %lld\n",arr[i&1][1],arr[i&1][2],arr[i&1][3]);
        }

        if(n & 1) {
            printf("%i. %lld\n",count,arr[1][2]);
        }

        else {
            printf("%i. %lld\n",count,arr[0][2]);
        }
    }

    return 0;
}
