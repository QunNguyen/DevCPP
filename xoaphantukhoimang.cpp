#include<stdio.h>

int main()
{
	int n; 
	scanf("%d", &n);
	int k;
	int a[100];
	for (int i=0 ; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	if (n>1)
	{
		int dem =0;
		for (int i=0; i<n; i++)
		{
			if(a[i]=k)
			{
				for(int i = k; i < n - 1; i++)
				{
        		a[i] = a[i+1];
        		--n;
				}
			}
		}
//		for (int i=0 ; i<n; i++)
//		{
//			printf("%d", a[i]);
//		}
	}
	return 0;
}
