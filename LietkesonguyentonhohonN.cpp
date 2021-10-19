#include<stdio.h>

int main()
{
	int a;
	scanf("%d", &a );
	if(a<0) return 0;
	for (int i = 1; i <=a; i++)
	{ 
		int dem =0;
		for (int j = 1; j <=i ; j++)
		{ 
			
			if (i % j == 0)
			{
				dem ++;
			}
		}
			if(dem == 2)
			{
				printf("%d ", i);
			}
	}
	return 0;
}
