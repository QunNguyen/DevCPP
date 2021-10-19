#include<stdio.h>
#include<math.h>

void mang(long long a[]){
	int N[9]={2,3,5,7,13,17,19,31};
	for(int i=0;i<8;i++){
		a[i]=pow(2,N[i]-1)*(pow(2,N[i])-1);
	}

}

int check(long long n,long long a[]){
	for(int i=0;i<8;i++){
		if(n==a[i]) return 1;
	}
	return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    long long a[9];
	mang(a);
    for(int i=1;i<=n;i++)
    {
    	if(check(i,a)==1)
    	{
    		printf("%d ",i);
		}
	}
        
    return 0;
}


