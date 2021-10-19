#include<stdio.h>
#include<math.h>

void snt(int a, int b, int sum )
{
	for(int i= a  ; i<=b ; i++)
	{
		int demo =1;
		for (int j = 2 ; j <= i/2 ;j++ )
		{
			
			if( i % j == 0)
			{
				demo =0;
				break;
			}
		}
		if (demo==1)
		int sum = 0;
		sum =+ i;
		printf("%d", sum );
	}
}

int main()
{
	int a , b, sum ;
	scanf("%d %d", &a , &b);
	snt(a, b, sum ); 
	
	return 0;
}
