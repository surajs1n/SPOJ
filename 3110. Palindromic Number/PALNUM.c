#include<stdio.h>

int main()
{
	long A[10],  	lower,		upper;
	int terms=0,	t,	i,	pal(long);
	
	printf("\nInput:\n");
	scanf("%i",&t);     // Enter number of terms....

	for(i=0;	i<t;	i++)
	{
		scanf("%ld",A+i);       //          having A[i] value.........
	}

	printf("\nOutput:\n");

	for(i=0;	i<t;	i++)
	{
		terms = 0;	lower = 1;	upper = A[i]-lower;

		while( lower <= upper)
		{
			if( pal(lower) && pal(upper) )
			{
				terms++;
				lower++;
				upper--;
			}

			else	{	lower++;	upper--;	}
		}
		printf("%i\n",2*terms);
	}

	return 0;
}

int pal(long l)
{
	long dup,rev=0, rem ;
	dup=l;

	while(dup)
	{
		rem = dup % 10;
		dup /= 10;
		rev = rev*10+rem;
	}

	if(l == rev )
		return 1;

	else
		return 0;
}











