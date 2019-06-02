#include<stdio.h>

int main()
{
    int arr[10000],n,i,ave = 0,goon=0;   long long sum = 0;

    scanf("%i",&n);

    if(n == -1)
        return 0;

    for(i=0;    i<n;    i++)
    {
        scanf("%i",&arr[i]);

        ave = (ave+arr[i])%n;
        sum += arr[i];
    }

    if(ave != 0)
        printf("-1\n");

    else
    {
        ave = sum/n;
        for(i=0;    i<n;    i++)
        {
            if(arr[i]<ave)
                goon += (ave-arr[i]);
        }
        printf("%i\n",goon);
    }

    main();
}
