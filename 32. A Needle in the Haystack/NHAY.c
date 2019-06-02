#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char txt[1000005];

void compute(char *pat,int *arr,int patLen) {

    int len = 0;
    int i = 1;

    arr[0] = 0;

    while(i < patLen) {
        if(pat[i] == pat[len]) {
            len++;
            arr[i] = len;
            i++;
        }

        else {

            if(len != 0) {
                len = arr[len - 1];
            }

            else {
                arr[i] = 0;
                i++;
            }
        }
    }
}

void findKMP(char *pat,char *txt) {

    int patLen = strlen(pat);
    int txtLen = strlen(txt);

    int *arr = (int *)malloc(sizeof(int) * patLen);

    compute(pat,arr,patLen);

    int patIndex = 0;
    int txtIndex = 0;

    while(txtIndex < txtLen) {

        if(pat[patIndex] == txt[txtIndex]) {
            patIndex++;
            txtIndex++;
        }

        if(patIndex == patLen) {
            printf("%i\n",txtIndex - patIndex);
            patIndex = arr[patIndex - 1];
        }

        else if(txtIndex < txtLen && pat[patIndex] != txt[txtIndex] ) {

            if(patIndex != 0) {
                patIndex = arr[patIndex -1];
            }

            else {
                txtIndex++;
            }
        }
    }

    free(arr);
}

int main() {

    char *pat;
    int num;

    while(scanf("%i",&num) != EOF) {

        pat = (char *)malloc((num+1));

        scanf("%s%s",pat,txt);

        findKMP(pat,txt);
    }

    return 0;
}
