#include<stdio.h>

int main()
{
    int t,i,j;      long long a,b;

    int arr[10][4] =    {   0,0,0,0,
                            0,0,0,0,
                            6,2,4,8,
                            1,3,9,7,
                            6,4,6,4,
                            0,0,0,0,
                            0,0,0,0,
                            1,7,9,3,
                            6,8,4,2,
                            1,9,1,9
                        };
    scanf("%i",&t);

    while(t--)
    {
        scanf("%lld%lld",&a,&b);

        a = a%10;

        if(b==0)
            printf("1\n");
        else if(a==0)
            printf("0\n");

        else
            switch(a)
            {
                case 1: printf("1\n");
                        break;

                case 2: j = b%4;
                        printf("%i\n",arr[2][j]);
                        break;

                case 3: j = b%4;
                        printf("%i\n",arr[3][j]);
                        break;

                case 4: j = b%4;
                        printf("%i\n",arr[4][j]);
                        break;

                case 5: printf("5\n");
                        break;

                case 6: printf("6\n");
                        break;

                case 7: j = b%4;
                        printf("%i\n",arr[7][j]);
                        break;

                case 8: j = b%4;
                        printf("%i\n",arr[8][j]);
                        break;

                default:   j = b%4;
                            printf("%i\n",arr[9][j]);

            }
    }

    return 0;
}
