#include<stdio.h>

int main()
{
	int doc, ngang;
	int i, j;
	scanf("%d %d", &doc, &ngang);
	
	for(i=1; i<=doc ; i++)
	{
		for (j=1 ; j<=ngang ; j++)
		{
			printf("%d", i);
		}
	printf("\n");
	}
	return 0;
}

