#include<stdio.h>
#include<string.h>

void diff(char *A,int l1,char *B,int l2) {

    int num1 = 0,num2 = 0,i;

    for(i=0;    i<l1;   i++) {
        num1 = 10 * num1 + (A[i] - '0');
    }

    for(i=0;    i<l2;   i++) {
        num2 = 10 * num2 + (B[i] - '0');
    }

    printf("%i",num1-num2);

}

void add(char *A,int l1,char *B,int l2) {

    int num1 = 0,num2 = 0,i;

    for(i=0;    i<l1;   i++) {
        num1 = 10 * num1 + (A[i] - '0');
    }

    for(i=0;    i<l2;   i++) {
        num2 = 10 * num2 + (B[i] - '0');
    }

    printf("%i",num1+num2);
}

int main() {

    int t,j,i;

    char num1[100],num2[100],num3[100],sym1[5],sym2[5];

    scanf("%i",&t);

    while(t--) {
        scanf("%s%s%s%s%s",num1,sym1,num2,sym2,num3);

        if(strstr(num1,"machula") != NULL) {
           diff(num3,strlen(num3),num2,strlen(num2));

           printf(" %s %s %s %s\n",sym1,num2,sym2,num3);
        }

        else if(strstr(num2,"machula") != NULL) {
           printf("%s %s ",num1,sym1);

           diff(num3,strlen(num3),num1,strlen(num1));

           printf(" %s %s\n",sym2,num3);
        }

        else {
            printf("%s %s %s %s ",num1,sym1,num2,sym2);
            add(num1,strlen(num1),num2,strlen(num2));
            printf("\n");
        }
    }
    return 0;
}
