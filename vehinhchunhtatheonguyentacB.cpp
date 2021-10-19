#include<stdio.h>

int main()
{
	int i, j, doc , ngang;
	scanf("%d %d", &doc, &ngang);
	
	for(int i =1 ;i<=doc; i++){
	
		for(j=i; j<=ngang; j++)
		{
			printf("%d", j);
		}
		for(int k=1; k<=i-1; k++)
		{
			printf("%d", ngang);
		}
		
		
		printf("\n");
	}
}
