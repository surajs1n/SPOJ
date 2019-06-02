#include<stdio.h>
#include<stdlib.h>

int main()
{
    while(1)
    {
        int num,temp,sum = 0,*arr,i,pro=1,j,n,hold;

        arr = malloc(4*1000000);

        scanf("%i",&num);

        if(num == 0)
            break;

        for(i=0;    i<num;    i++)
            scanf("%i",arr+i);

        temp = num; i =0;

        while(1)
        {
            if(temp > pro)
            {
                temp -= pro;
                i += pro;
            }

            else
            {
                n = (num-i+1)/2;
                hold = pro/2-n;

                for(j=i-hold;    j<num;  j++)
                    sum += arr[j];

                break;

            }
            pro *= 2;
        }

       if(num==1)
            printf("%i\n",arr[0]);
       else
            printf("%i\n",sum);

       free(arr);
    }

    return 0;
}
