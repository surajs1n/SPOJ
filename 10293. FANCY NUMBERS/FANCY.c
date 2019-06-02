#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        char mobile[30];
        int i,j,con=0,pro=1,len=0,pow2=1;
        scanf("%s",mobile);

        while(mobile[len++]!=0);
        len--;

        for(i=0;    i<len;   )
        {
            j=i;    con=0; pow2=1;
            while(mobile[j++]==mobile[i])
            {
                con++;
            }
            i += con;

            con--;
            while(con--)
                pow2 *= 2;

            pro *= pow2;
        }
        printf("%i\n",pro);
    }
    return 0;
}
