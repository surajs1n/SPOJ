#include<stdio.h>
#include<math.h>

int main()
{
   int  num;

    scanf("%i",&num);

    while(num != -1)
    {
        double actual_n,temp_num;           int  app_n;

        num--;

        temp_num = num/3.0;

        actual_n = ((double)(-1+sqrt(1+4*temp_num))/2);

        app_n = actual_n;

        if(app_n==actual_n)
            printf("Y\n");
        else
            printf("N\n");
        scanf("%d",&num);
    }
    return 0;
}
