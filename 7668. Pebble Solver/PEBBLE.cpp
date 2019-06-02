#include<bits/stdc++.h>

int main() {
    int i,j,k,count = 0;  char str[1000005];

    while(scanf("%s",str)!= EOF) {
        count++;
        int len = strlen(str),result = 0;  char ch = '0';
        for(i=0;    i<len;  i++) {
            if(str[i] != ch) {
                ch = str[i];
                result++;
            }
        }
        printf("Game #%i: %i\n",count,result);
    }
    return 0;
}
