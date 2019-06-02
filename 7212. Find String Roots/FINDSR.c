#include<stdio.h>
#include<string.h>

char str[100001];
int temp[1000];

void merge_it(int *arr,int low,int mid,int high)
{
    int i = low, j = mid+1, k = low-1;

    while( i <= mid && j <= high)
    {
        if(arr[i] < arr[j])
            temp[++k] = arr[i++];
        else
            temp[++k] = arr[j++];
    }

    if(i > mid)
        while(j <= high)
            temp[++k] = arr[j++];

    else
        while(i <= mid)
            temp[++k] = arr[i++];

    for(i=low;  i<=k;   i++)
        arr[i] = temp[i];
}

void part_it(int *arr,int low,int high)
{
    int mid;
    if(low<high)
    {
        mid = (low + high)/2;
        part_it(arr,low,mid);
        part_it(arr,mid+1,high);
        merge_it(arr,low,mid,high);
    }
}

int main()
{
    int i,j,k,len;

    while(1)
    {
        int flag = 0,hold[1000],hold_index = -1,temp,count=0;

        scanf("%s",str);

        if(str[0] == '*')
            break;

        len = strlen(str);

        for(i=1;    i<len;  i++)
            if(str[0] == str[i])
                count++;

        if(count == len - 1)
        {
            printf("%i\n",len);
            continue;
        }

        for(i=2;    i<=sqrt(len);   i++)
            {
                if(len%i == 0)
                {
                    hold[++hold_index] = i;
                    hold[++hold_index] = len/i;
                }
            }

        if(hold_index == -1)
            flag = 1;

        else
            part_it(hold,0,hold_index);

        if(!flag)
        {
            for(i=0;    i<=hold_index;    i++)
            {
                flag = 0;

                int rep = len/hold[i];

                for(j=0;    j<hold[i];  j++)
                    for(k=1; k<rep; k++)
                        if(str[j] != str[j + hold[i]*k])
                            flag = 1;

                if(flag == 0)
                    break;
            }
        }

        if(flag == 1)
            printf("%i\n",1);
        else
            printf("%i\n",len/hold[i]);
    }

    return 0;
}
