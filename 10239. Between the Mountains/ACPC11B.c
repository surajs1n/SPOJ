#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int n1, n2, *tower1,    *tower2,    i,  j,  diff=1000456,temp;

        scanf("%i",&n1);

        tower1 = (int *)malloc(sizeof(int)*n1);

        for(i=0;    i<n1;   i++)
            scanf("%i",tower1+i);

        scanf("%i",&n2);

        tower2 = (int *)malloc(sizeof(int)*n2);

        for(i=0;    i<n2;   i++)
        {
            scanf("%i",tower2+i);

            for(j=0;    j<n1;   j++)
            {
                temp = tower1[j] - tower2[i];

                if(temp<0)
                    temp = -1*temp;

                else if(temp==0)
                {
                    diff=0; break;
                }
                if(diff>temp)
                    diff = temp;
            }
        }
        free(tower1);   free(tower2);

        printf("%i\n",diff);
    }
    return 0;
}
