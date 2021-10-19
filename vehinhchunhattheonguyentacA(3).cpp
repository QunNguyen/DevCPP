#include<stdio.h>

int main()
{
	int doc , ngang ;
	int i, j;
	scanf("%d %d", &doc , &ngang);
	
	for (i=1 ; i<=doc; i++)
	{
		for(j=ngang ;j>=i; j--)
		{
			printf("%d" , j);
		}
		for(j=1; j<=i-1 ; j++)
		{
			if (j<=ngang) printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}     
