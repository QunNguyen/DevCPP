#include<stdio.h>

int main()
{
	int n;
	scanf ("%d",&n);
	
	for( int i=0; i< n+n-1; i++)
	{
		if(i<n)
		{
			for (int j=0; j< n+i ; j++)
			{
				if(i<n-j-1) 
				printf("~");
				else printf("*");
			}
		}	else
		
			for(int j=0 ; j<n+n+n-i-2 ; j++)
			{
				if(j<=i-n) 
				printf("~");
				else printf("*");
			}
			
		printf("\n");
	}
}
