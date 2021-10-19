#include<stdio.h>
#include<math.h>

void SNT(int n, int a[])
{
    int dem =0;
	for (int i = 0; i < n; i++)
	{ 
		for (int j = 1; j <=i ; j++)
		{
			
			if ( a[i] % j == 0)
			{
				dem++;
			}
			if(dem == 1) printf("%d ", a[i]);
		}	
	}
	
}

int main()
{
	int n; 
	scanf("%d", &n);
	
	int a[100];
	for(int i = 0 ; i< n ;i++)
	{
		scanf("%d", &a[i]);
	}
	SNT(n,a);
	
//	int dem =0;
//	for (int i = 0; i < n; i++)
//	{ 
//		for (int j = 1; j <=i ; j++)
//		{
//			
//			if ( a[i] % j == 0)
//			{
//				dem ++ ;
//			}
//			if (dem == 2)
//			{ 
//				printf("%d ", a[i]);
//			}
//		}	
//	}
	return 0;
}
