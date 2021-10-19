#include<stdio.h>

int main()
{
	int N ,du;
	scanf("%d", &N);

	int le = 0 ;
	int chan =0;

	while (N!=0)
	{	
		du = N%10;
		if(du % 2==0)
		{
			le++;
		}	else chan++	;
		N/=10;
	}	
	
	printf("%d %d", chan ,le);

	return 0;
}
