#include<stdio.h>
#include <stdlib.h>

int main()
{
	int n; 
	scanf("%d", &n);
	
	int q=0;
	while (n>0)
	{
		for (int i = 0; i<=q ; i++)
		{
			if(i==0||i==q||n==1) printf("*");
			else printf(".");
		}
		n-- ;
 		q += 1;
		
		printf("\n");
	}
}
