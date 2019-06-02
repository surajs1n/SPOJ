#include<stdio.h>

int main()
{
    char str1[501],str2[501];

    scanf("%s%s",str1,str2);

    while(str1[0]!='*' && str2[0]!='*')
    {
        int i,count_no=0;

        for(i=0;    str1[i]!=0;      )
        {
            if(str1[i]==str2[i])
                i++;

            else
            {
                count_no++;
                while(str1[i] != str2[i] && str1[i]!=0)
                    i++;
            }
        }

        printf("%i\n",count_no);

        scanf("%s%s",str1,str2);

    }

    return 0;
}
