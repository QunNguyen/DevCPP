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
		for(j=1;j<i;j++)
		{	
			if (j<=ngang) printf("%d", ngang);
		}
		printf("\n");
	}
}
