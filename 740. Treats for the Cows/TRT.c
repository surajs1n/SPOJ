#include<stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int fun(int *arr, int low, int high, int age) {

    if(low == high) {
        return age*arr[low];
    }

    return max( age*arr[low] + fun(arr, low+1, high, age+1) , age*arr[high] + fun(arr, low, high-1, age+1) );
}

int main() {

    int arr[2005],i,j,n;

    scanf("%i",&n);

    for(i=0;    i<n;    i++) {
        scanf("%i",arr+i);
    }

    printf("%i\n",fun(arr,0,n-1,1));

    return 0;
}
