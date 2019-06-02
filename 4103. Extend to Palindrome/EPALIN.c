#include<stdio.h>
#include<string.h>

char txt[100005], pat[100005];
int  arr[100005];

void computeArray(char *pat,int *arr) {

    int len = 0;
    int i = 1;
    int patLen = strlen(pat);

    arr[0] = 0;

    while(i < patLen) {
        if(pat[len] == pat[i]) {
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


void findPattern(char *txt, char *pat) {

    int txtLen = strlen(txt);
    int patLen = strlen(pat);

    computeArray(pat, arr);

    int txtIndex = 0;
    int patIndex = 0;

    while(txtIndex < txtLen) {

        if(pat[patIndex] == txt[txtIndex]) {
            patIndex++;
            txtIndex++;
        }

        else if(txtIndex < txtLen && pat[patIndex] != txt[txtIndex]) {
            if(patIndex != 0) {
                patIndex = arr[patIndex - 1];
            }

            else {
                txtIndex++;
            }
        }
    }

    while(patIndex < patLen) {
        printf("%c",pat[patIndex++]);
    }

}



int main () {

    int i,j;

    while( scanf("%s",txt) != EOF ) {

        j = strlen(txt);

        for(i=0;    i<j/2;     i++) {
            if(txt[i] != txt[j - i - 1]) {
                break;
            }
        }

        printf("%s",txt);

        if(i < j/2) {
            i = 0;
            j = strlen(txt) - 1;

            while(j >= 0) {
                pat[i] = txt[j];
                j--;
                i++;
            }

            pat[i] = 0;

            findPattern(txt,pat);
        }

        printf("\n");
    }
    return 0;
}
