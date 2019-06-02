#include<stdio.h>
#include<string.h>

char str1[100100],str2[100100],str3[100100];

int main()
{
    int hcf,len1,len2,t,i,j,k,flag,rep;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%s%s",str1,str2);

        len1=strlen(str1);
        len2=strlen(str2);

        if(len1 > len2)
        {
            j = len1;
            i = len2;
        }
        else
        {
            j = len2;
            i = len1;
        }

        flag = 0;

        while(i)
        {
            hcf = i;
            i = j%i;
            j = hcf;
        }

        for(i=0;    i<hcf;  i++)
            str3[i] = str1[i];

        str3[i] = 0;

        rep = len1/hcf;

        for(i=0;    i<rep;  i++)
            for(j=0;    j<hcf;  j++)
                if(str3[j] != str1[j+hcf*i])
                {
                    flag = 1; break;
                }

        if(!flag)
        {
            rep = len2/hcf;

            for(i=0;  i<rep;  i++)
                for(j=0;   j<hcf;  j++)
                    if(str3[j] != str2[j+hcf*i])
                    {
                        flag = 1; break;
                    }
        }

        if(flag)
            printf("NO\n");
        else
            printf("YES\n");

    }

    return 0;
}
