#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a , &b);
	if(a<0 && b<0 && a>b) return 0;
	for (int i = a; i <=b; i++)
	{ 
		int dem =0;
		for (int j = 2; j <=i ; j++)
		{
			
			if (i % j == 0)
			{
				dem ++;
			}
		}
			if(dem == 1)
			{
				printf("%d ", i);
			}
	}
	return 0;
}
