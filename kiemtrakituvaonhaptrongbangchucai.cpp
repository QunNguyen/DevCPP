#include<stdio.h>

int main()
{
	char N;
	scanf("%c", &N);
	
	if( N >= 97 && N <= 122 ||N >=65 && N<= 90)
	{
		printf("1");
	}
	else printf("0");
	return 0;
	
}
