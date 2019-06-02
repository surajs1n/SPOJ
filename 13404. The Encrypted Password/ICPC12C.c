#include<stdio.h>

char org[100001],enc[100001];

int main()
{
    int i,j,k,index,t,flag;  char ch;

    scanf("%i%c",&t,&ch);

    while(t--)
    {
        scanf("%s%s",enc,org);

        int arr_enc[26]={0},arr_org[26]={0};

        i = -1;
        while(org[++i] != 0)
        {
            arr_enc[ enc[i] - 97 ]++;
            arr_org[ org[i] - 97 ]++;
        }

        index = flag = 0;
        i--;
        arr_enc[ enc[i] - 97 ]--;

        do
        {
            j = flag = -1;
            arr_enc[ enc[i] - 97 ]++;

            while(++j < 26)
                if( arr_enc[j] != arr_org[j] )
                {
                        flag = 0;
                        break;
                }

            if(flag)
                break;

            arr_enc[ enc[index++] - 97 ]--;

        }while(enc[++i] != 0);

        flag ? printf("YES\n") : printf("NO\n");

    }

    return 0;
}
