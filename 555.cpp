#include<stdio.h>
#include<math.h>

int check(int n){
	int temp=0;
		for(int j=2 ; j<=n ;j++){
			if(n%j==0)
				temp++;
		}
		if(temp==1){
			return true;
		}
		return false;
	}


int main()
{
	int b; 
	scanf ("%d", &b);
	int a[100], dem[100];
	for(int i=0; i<b ;i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(int i=0; i<b; i++)
	{
		if(check(a[i])==true)
		{
			printf("%d ", a[i]);	
		}
	}
	return 0;
}
