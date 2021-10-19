#include<stdio.h>

int main()
{
	int cot ,hang ;
	scanf("%d %d", &cot , &hang);
	
	for(int i=1 ; i<=cot ; i++)
	{
		for (int j=i-1 ; j>=1 ;j--)
		{
			printf("~");
		}
		for(int j=1; j<=hang ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
