#include<stdio.h>

int arr[1005][1005];

int main() {

    int n,i,j,k,m,run;

    run = 1;

    while(1) {

        scanf("%i",&n);

        if(n == 0) {
            break;
        }

        int net_sum = 0,eff_sum = 0;

        for(i=1;    i<=n;   i++) {
            int row_sum = 0;

            for(j=1;    j<=n;   j++) {
                scanf("%i",&arr[i][j]);
                row_sum += arr[i][j];
            }

            net_sum += (arr[i][j] = row_sum);
        }


        for(j=1;    j<=n;   j++) {
            int col_sum = 0;

            for(i=1;    i<=n;   i++) {
                col_sum += arr[i][j];
            }

            arr[i][j] = col_sum;
        }

        for(i=1;    i<=n;   i++) {
            if(arr[n+1][i] - arr[i][n+1] > 0) {
                eff_sum += arr[n+1][i] - arr[i][n+1];
            }
        }

        printf("%i. %i %i\n",run,net_sum,eff_sum);

        run++;
    }

    return 0;
}

