#include<math.h>
#include<stdio.h>
#include<string.h>
main()
{
	int a;
	scanf("%d",&a);
	int dem=0;
	while(a>0)
	{
		a=a/10;
		dem++;
	}
	printf("%d",dem);
	
}
