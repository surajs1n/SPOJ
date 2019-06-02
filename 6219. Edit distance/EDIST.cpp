#include<bits/stdc++.h>

int min(int a,int b)
{
    if(a < b)
        return a;
    else
        return b;
}

int arr[2005][2005];

int main()
{
    int t,i,j,len1,len2;    char str1[2005],str2[2005];

    scanf("%i ",&t);

    while(t--)
    {
        gets(str1);
        gets(str2);

        len1 = strlen(str1);
        len2 = strlen(str2);

        for(i=0;    i<=len1;    i++)
        {
            for(j=0;    j<=len2;    j++)
            {
                if(i == 0)
                    arr[i][j] = j;

                else if(j == 0)
                    arr[i][j] = i;

                else
                    arr[i][j] = 0;
            }
        }

        for(i=1;    i<=len1;    i++)
        {
            for(j=1;    j<=len2;    j++)
            {
                if(str1[i-1] == str2[j-1])
                    arr[i][j] = arr[i-1][j-1];

                else
                    arr[i][j] = min(arr[i-1][j-1],min(arr[i-1][j],arr[i][j-1])) + 1;
            }

        }

        printf("%i\n",arr[len1][len2]);

    }

    return 0;
}

