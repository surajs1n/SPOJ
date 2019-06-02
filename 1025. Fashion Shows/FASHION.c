#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int cand_num,   *men,   *women, i,j,sum=0,temp;

        scanf("%i",&cand_num);

        men = (int *) malloc(sizeof(int)*cand_num);
        women = (int *) malloc(sizeof(int)*cand_num);

        for(i=0 ; i<cand_num;   i++)
            scanf("%i",men+i);

        for(i=0 ; i<cand_num;   i++)
            scanf("%i",women+i);

        for(i=0;    i<cand_num-1;     i++)
        {
            for(j=i+1;  j<cand_num;     j++)
                if( men[i] > men[j] )
                {
                    temp=men[i];    men[i]=men[j];  men[j]=temp;
                }
        }

        for(i=0;    i<cand_num-1;     i++)
        {
            for(j=i+1;  j<cand_num;     j++)
                if( women[i] > women[j] )
                {
                    temp=women[i];    women[i]=women[j];  women[j]=temp;
                }
        }

        for(i=0;    i<cand_num;     i++)
        {
            sum += men[i]*women[i];
        }

        printf("%i\n",sum);

        free(men);
        free(women);
    }
    return 0;
}
