#include<stdio.h>

struct carrom
{
    char play;  int w,b,r;
}obj[111];

int i=0;

int main()
{
    int no_r=0,no_w=0,no_b=0,flag=0,team = 0,r_team = 0,sum = 0; char ch;

    while(scanf("%c",&obj[i].play) != EOF )
    {
        if(flag == 0)
        {
            if(obj[i].play == 'A' || obj[i].play == 'C')
                team = 1;
            else
                team = 2;

            flag = 1;
        }

        if(obj[i].play == '#')
        {
            flag = 0;

            scanf("%c",&ch);

            if(no_r == 1)
            {
                if(no_w == 9 && no_b == 9)
                    printf("Incomplete game.\n");

                else if(no_w == 9)
                {
                    if(team == r_team)
                        sum = 14 - no_b;
                    else
                        sum = 9 - no_b;

                    printf("Team-%d win and the point is %i.\n",team,sum);
                }

                else if(no_b == 9)
                {
                    if(team == 1)
                        team++;
                    else
                        team--;

                    if(team == r_team)
                        sum = 14 - no_w;
                    else
                        sum = 9 - no_w;

                    printf("Team-%d win and the point is %i.\n",team,sum);

                }

                else
                    printf("Incomplete game.\n");

            }

            else
                printf("Incomplete game.\n");

            no_r = no_w = no_b = r_team = 0;
            sum = 0;
        }

        else
        {
            scanf("%i%i%i%c",&obj[i].w,&obj[i].b,&obj[i].r,&ch);

            no_w += obj[i].w;
            no_r += obj[i].r;
            no_b += obj[i].b;

            if(obj[i].r == 1)
            {
                if(obj[i].play == 'A' || obj[i].play == 'C')
                    r_team = 1;
                else
                    r_team = 2;
            }

            i++;
        }
    }

    return 0;

}
