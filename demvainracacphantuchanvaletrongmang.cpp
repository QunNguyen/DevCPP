#include<stdio.h>

int main()
{
	int n;
	int demle=0 , demchan= 0;
	scanf("%d", &n);
	int a[100];
	for (int i=0 ; i<n ; i++)
	{
		scanf("%d", &a[i]);
	}
	if(n>2) {

	for (int i=0 ; i<n; i++)
	{
		if (a[i]%2 !=0)
		{ 
			demle++;
		}
	}
	printf("%d ", demle);
	
	for (int i=0 ; i<n; i++)
	{
		if (a[i] %2 !=0 )
		{ 
			printf("%d ", a[i]);
		}
	}
	printf("\n");
	
	for (int i=0 ; i<n; i++)
	{
		if (a[i]%2 ==0)
		{ 
			demchan++;
		}
	}
	printf("%d ", demchan);
	
	
	
	
	for (int i=0 ; i<n; i++)
	{
		if (a[i]%2 ==0)
		{ 
			printf("%d ", a[i]);
		}
	}
	
} else printf("0");
	return 0;
}


