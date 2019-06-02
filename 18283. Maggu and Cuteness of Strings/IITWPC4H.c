#include<stdio.h>

char str1[100100],str2[100100];

int main()
{
    int i,j,t,flag,temp,count;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%s%s",str1,str2);

        int arr1[26]={0},arr2[26]={0},sum;

        flag = sum = temp = count = 0;

        char hold;

        for(i=0;    str1[i]!=0;)
        {
            if(flag == 0)
            {
                hold = str1[i];
                count++;
                flag = 1;
                i++;
            }

            else if(str1[i] == hold)
            {
                count++;
                i++;
            }

            else
            {
                if(arr1[hold - 97] < count)
                    arr1[hold - 97] = count;
                count = flag = 0;
            }
        }

        if(arr1[hold - 97]<count)
                arr1[hold - 97] = count;
        count = flag = 0;

        for(i=0;    str2[i]!=0;)
        {
            if(flag == 0)
            {
                hold = str2[i];
                count++;
                flag = 1;
                i++;
            }

            else if(str2[i] == hold)
            {
                count++;
                i++;
            }

            else
            {
                if(arr2[hold - 97] < count)
                    arr2[hold - 97] = count;
                count = flag = 0;
            }
        }

        if(arr2[hold - 97]<count)
                arr2[hold - 97] = count;
        count = flag = 0;

        for(i=0;    i<26;   i++)
            if(arr1[i]+arr2[i] > sum)
                sum = arr1[i]+arr2[i];

        printf("%i\n",sum);

    }
    return 0;
}
