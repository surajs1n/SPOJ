#include<stdio.h>

int arr[10005];
long long ans[10005];

int main() {
    int n,i,j,t;

    scanf("%i",&t);

    for(j=1;    j<=t;   j++) {
        scanf("%i",&n);

        ans[0] = 0;

        for(i=1;    i<=n;   i++) {
            scanf("%i",arr+i);
        }

        ans[1] = arr[1];

        for(i=2;    i<=n;   i++) {
            if(ans[i-1] < arr[i]+ans[i-2]) {
                ans[i] =  arr[i]+ans[i-2];
            }

            else {
                ans[i] = ans[i-1];
            }
        }

        printf("Case %i: %lld\n",j,ans[n]);
    }

    return 0;
}
