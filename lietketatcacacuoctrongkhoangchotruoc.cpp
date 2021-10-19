#include<stdio.h>

int check(int n){
	int temp=0;
		for(int j=2 ; j<=n ;j++){
			if(n%j==0)
				temp++;
		}
		if(temp==1){
			return 0;
		}
		return 1;
	}

int main()
{
	int a, b;
	if(a<0||b<0) return 0;
	
	for(int j=a; j<=b ;j++)
	{
		check(j);
		printf("%d", check(j));
	}
	return 0;
}
