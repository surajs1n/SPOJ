#include<stdio.h>

int main() {
    int i,n,t,arr[100005],max;

    scanf("%i",&t);

    while(t--) {
        scanf("%i%i",&n,&max);

        for(i=0;    i<n;    i++) {
            scanf("%i",arr+i);
        }

        int temp = max;

        int low = 0,high = 0,min = 100000000;

        int maxCount = -323,tempCount = 0 ;

        while(low < n && high < n) {
            if(arr[high] < temp) {
                tempCount++;
                temp -= arr[high];
                high++;
            }

            else if(high == low) {
                high = low = low + 1;
                tempCount = 0;
            }

            else {
                tempCount--;
                temp += arr[low];
                low++;
            }

            if(tempCount > maxCount) {
                maxCount = tempCount;
                min = max - temp;
            }

            else if(tempCount == maxCount) {
                if(min > (max - temp)) {
                    min = max - temp;
                }
            }

        }

        printf("%i %i\n",min,maxCount);

    }
    return 0;
}
