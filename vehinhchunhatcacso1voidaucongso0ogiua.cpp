#include<stdio.h>

int main()
{
	int doc , ngang ;
	int i , j, GN , GD ;
	scanf("%d %d", &doc, &ngang);
	
	GN= (ngang+1)/2;
	GD =(doc+1)/2;
	
	for(i=1;i<=doc ;i++)	
	{
		for(j=1; j<=ngang ; j++)
		{
			if(GN == j || GD==i)
			{
				printf("0");
			}
			else if((ngang%2 ==0)&& GN+1== j||(doc%2==0 && GD +1 ==i))
			{
				printf("0");	
			}
			else printf("1");
		}
		printf("\n");
	}
return 0;
}
