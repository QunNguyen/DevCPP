#include<stdio.h>

int main()
{
	int i, j, doc , ngang;
	scanf("%d %d", doc, &ngang);
	
	for(i=1 ;i<=doc; i++)
	{

		for(j=1;j<=i;j++)
		{	
			printf("%d",i);
		} 
		
		for(j=i; j<=ngang; j++)
		{
			if (j<=ngang) printf("%d", j);
		}
	printf("\n");
	}
}
