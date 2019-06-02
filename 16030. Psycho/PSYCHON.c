#include<stdio.h>

int arr[3250] = {0}, prime[1000], prime_index = -1;

int main()
{
    int i,j,n,k,num;

    prime[++prime_index] = 2;

    for(i=3;    i<=57;  i+=2) {
        if(!arr[i]) {
            prime[++prime_index] = i;

            for(j=i*i, k = 2*i;     j <= 3250;  j += k) {
                arr[j] = 1;
            }
        }
    }

    for(;   i<=3249;    i+=2) {
        if(!arr[i]) {
            prime[++prime_index] = i;
        }
    }

    scanf("%i",&n);

    while(n--) {

        scanf("%i",&num);

        int count = 0;

        for(i = 0;  prime[i]*prime[i] <= num;   i++) {
            if(num%prime[i] == 0) {
                int check = 0;

                while(num%prime[i] == 0) {
                    check++;
                    num /= prime[i];
                }

                if(check & 1) {
                    count--;
                }

                else {
                    count++;
                }
            }
        }

        if(num != 1) {
            count--;
        }

        if(count > 0) {
            printf("Psycho Number\n");
        }

        else {
            printf("Ordinary Number\n");
        }
    }

    return 0;

}
