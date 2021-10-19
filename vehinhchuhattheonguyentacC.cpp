#include<stdio.h>

int main()
{
	int doc , ngang ;
	int i, j;
	scanf("%d %d", &doc, &ngang);
	for(i=1; i<=doc; i++)
	{
		for(j=i;j<=ngang;j++)
		{
			printf("%d", j);
		}

		for(j=i-1; j>=1; j--)
		{
		 printf("%d",j);
		}
		printf("\n");
	}
return 0;
}
