#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,round;

    scanf("%i",&t);

    for(round=1;    round<=t;   round++)
    {
        int n,vowel_round=0,consonant_round=0,i=-1,j=-1,place,k=-1;

        char ch,vowel[5]={'A','U','E','O','I'},  consonant[]={'J','S','B','K','T','C','L','D','M','V',
                                                            'N','W','F','X','G','P','Y','H','Q','Z','R'}, *str;


        scanf("%i",&n);

        str = (char *)malloc(sizeof(char)*(n+1));

        printf("Case %i: ",round);

        for(place=1;      place<=n;   place++)
        {
            if(vowel_round == 0)
              {
                  vowel_round = 21;
                  i++;
              }

            if(consonant_round == 0)
            {
                 consonant_round = 5;
                 j++;
            }

            if(place%2==0)
            {
                consonant_round--;
                str[++k]=consonant[j];
            }

            else
            {
                vowel_round--;
                str[++k]=vowel[i];
            }

        }

        str[k+1]=0;

        for(i=0;    i+2<=k;      i++)
            for(j=i+2;  j<=k;  j += 2)
                if(str[i]>str[j])
                {
                    ch = str[i];
                    str[i] = str[j];
                    str[j] = ch;
                }

        printf("%s\n",str);

        free(str);
    }
    return 0;
}
