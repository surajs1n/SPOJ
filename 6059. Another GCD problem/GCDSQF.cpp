#include<stdio.h>
#include<string.h>

int main() {
    int i,j,k,n,l1,l2,l,temp,t;   char str1[1005],str2[1005],result[1005];

    scanf("%i",&t);

    while(t--) {
        scanf("%s%s",str1,str2);

        l1 = strlen(str1);
        l2 = strlen(str2);

        l = (l1 < l2) ? l1 : l2;

        for(k = -1, i = 0;   i < l;  i++ ) {
            if(str1[i] == '1' && str2[i] == '1') {
                result[++k] = '1';
            }

            else {
                result[++k] = '0';
            }
        }

        for(i=k; i>=0 && result[i] == '0';   i--);

        if(i < 0) {
            printf("relatively prime\n");
        }

        else {
            for(j=0;    j<=i;   j++) {
                printf("%c",result[j]);
            }

            printf("\n");
        }
    }

    return 0;
}
