#include<stdio.h>

struct cor
{
    int x,y;
}obj[1000];

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int n,i,j,max=1000000000,per=-1,flag=1;      double d;

        scanf("%i",&n);

        for(i=0;    i<n;    i++)
            scanf("%i%i",&obj[i].x,&obj[i].y);


        for(i=0;    i<n;    i++)
        {
            max=1000000000;
            for(j=0;    j<n;    j++)
                if(i!=j)
                {
                    if( (obj[j].x - obj[i].x)*(obj[j].x - obj[i].x) + (obj[j].y - obj[i].y)*(obj[j].y - obj[i].y) < 4)
                    {
                        flag = 0; break;
                    }

                    if( max > (obj[j].x - obj[i].x)*(obj[j].x - obj[i].x) + (obj[j].y - obj[i].y)*(obj[j].y - obj[i].y))
                        max = (obj[j].x - obj[i].x)*(obj[j].x - obj[i].x) + (obj[j].y - obj[i].y)*(obj[j].y - obj[i].y);
                }

            if(flag == 0)
                break;

            if(per < max)
                per = max;
        }

        if(flag == 0)
            printf("-1.000000\n");

        else
        {
            d = sqrt(per);

            d -= 1;

            printf("%0.6lf\n",d);
        }
    }

    return 0;

}
