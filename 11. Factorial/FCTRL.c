#include<stdio.h>
#include<math.h>

int main()
{
    int t;

    scanf("%d",&t);

    while(t--)
    {
        int num,sum=0,i;

        scanf("%d",&num);

        for(i=1;    ;   i++)
        {
            sum += num/(int)pow(5,i);
            if(num/(int)pow(5,i)==0)
                break;
        }

        printf("%d\n",sum);
    }
    return 0;
}
