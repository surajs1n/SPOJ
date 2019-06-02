#include<stdio.h>

int dp[2005][2005],arr[2005];

int main() {
    int i,j,n,age;

    scanf("%i",&n);

    for(i=0;    i<n;    i++) {
        scanf("%i",arr+i);
        dp[i][i] = n*arr[i];
    }

    for(i = n-2;    i>=0;   i--) {

        for(j = i+1;    j<n;    j++) {
            age = n - j + i;
            dp[i][j] = (age*arr[i] + dp[i+1][j] > age*arr[j] + dp[i][j-1]) ? (age*arr[i] + dp[i+1][j]) : (age*arr[j] + dp[i][j-1]);
        }
    }

    printf("%i\n",dp[0][n-1]);

    return 0;
}
