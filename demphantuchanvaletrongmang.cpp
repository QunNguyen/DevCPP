#include<stdio.h>

int main()
{
	int n; 
	scanf("%d", &n);
	
	int a[100];
	
	if(n>1)
	{
	for (int i=0 ; i<n ; i++)
	{
		scanf("%d", &a[i]);
	}
	
	int demle=0 ;
	int demchan=0;
	
	for (int i=0 ; i<n ; i++)
	{
		if (a[i]%2 ==0)
		{
			demchan++;
		}
		else demle ++;
	}
	printf("%d %d",demchan, demle );
	}
	return 0;
}	
