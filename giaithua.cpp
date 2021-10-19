#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	long long gt = 1;
	
	while(n>=1){
		gt *= n;
		n--;
	}
	printf("%lld",gt);
return 0;
}
