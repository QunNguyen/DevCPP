#include<stdio.h>

int main()
{
	int i, j, doc , ngang;
	scanf("%d %d", &doc, &ngang);
	
	for(int i =doc ;i>=1; i--){
	
		for(j=1; j<=ngang ; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}
