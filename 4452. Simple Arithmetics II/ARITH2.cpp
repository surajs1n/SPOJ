#include<stdio.h>

int main() {
    int t;  unsigned long long a,b,n;   char ch;

    scanf("%i",&t);

    while(t--) {

        a = b = 0;
        ch = '+';

        while(1) {

            scanf("%llu ",&b);

            switch(ch) {
                case '+' :  a += b;
                            break;
                case '-' :  a -= b;
                            break;
                case '*' :  a *= b;
                            break;
                case '/' :  a /= b;
            }

            scanf("%c",&ch);

            if(ch == '=') {
                break;
            }
        }

        printf("%llu\n",a);
    }

    return 0;
}
