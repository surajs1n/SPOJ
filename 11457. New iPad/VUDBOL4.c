#include<stdio.h>

int main()
{
    int n=0,i=0,j=0;        char pre[50][50],out[100][100],ch;

    scanf("%i",&n);

    if(n == 0)
        return 0;

    for(i=0;    i<n;    i++)
    {
        scanf("%c",&ch);

        for(j=0;    j<n;    j++)
        {
            scanf("%c",&pre[i][j]);

            out[2*i][2*j+1] = out[2*i+1][2*j] = out[2*i+1][2*j+1] = out[2*i][2*j] = pre[i][j];
        }
    }
    for(i=0;    i<2*n;    i++)
    {
        for(j=0;    j<2*n;  j++)
            printf("%c",out[i][j]);

        printf("\n");
    }

    main();
}
