#include<stdio.h>

int main()
{
    int i,j,k,t,fre[10];

    scanf("%i",&t);

    while(t--)
    {
        int arr[200]={0},count=0;

        for(i=2;    i<10;   i++)
        {
            scanf("%i",fre+i);
            if(fre[i]==0)
                count++;
        }

        if(count == 8)
            printf("1\n");

        else
        {
            count=0;
            for(i=2;    i<10;   i++)
            {
                for(j=1;    fre[i]; j++)
                    if(j%i && arr[j]==0)
                    {
                        fre[i]--;
                        arr[j] = i;
                    }
            }

            for(i=199;  i>0;    i--)
                if(arr[i])
                    break;


            for(j=1;    j<i;    j++)
                if(!arr[j])
                {
                    for(k=1;    k<i;    k++)
                        if(2<=arr[k] && arr[k]<=9 && j%arr[k])
                        {
                            count++; arr[k] = 42; break;
                        }
                }

            printf("%i\n",i-count);
        }
    }

    return 0;
}
