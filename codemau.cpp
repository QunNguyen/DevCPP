#include<stdio.h>
#include<math.h>

bool snt(int n)
{
	if(n<2)
		return false;
	else if(n==2)
		return true;
	else
	{
		for(int i = 2; i <= sqrt(n); i++)
		{
			if(n%i==0)
				return false;
		}
	}
	return true;
}

int main()
{
	int n,a[100],m=0,b[100],k=0;
	scanf("%d",&n);
	while(n>0)
	{
		int socuoi;
		socuoi = n % 10;
		n/=10;
		a[m] = socuoi;
		m++;
	}
	for(int j = 0; j < m; j++)
	{
		if(snt(a[j]) == true)
		{
			printf("%d " ,a[j]);
		}
	}

	
//	int dem=1;
//	for(int j=0; j<=i;j++)
//	{
//		if(a[j]==a[j-1])
//		{
//			dem++;
//			printf("%d " , dem);
//		} else dem ;
//	}
}
