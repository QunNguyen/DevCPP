#include<stdio.h>
#include<math.h>

int  nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return 0;
	return 1;
}

int tongcs(int n){
	int s=0;
	while(n>0){
		s+=n%10;
		n=n/10;
	}
	return s;
}

int primeSum(int n){
	int sum=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			if(nt(i)){
				while(n%i==0){
					sum+=tongcs(i);
					n=n/i;
				}
			}
		}
	}
	if(n!=1&&nt(n)) sum+=tongcs(n);
	return sum;
}

int main(){
		int n;
		scanf("%d",&n);
		if(nt(n)==0&&(primeSum(n)==tongcs(n))) printf("YES");
		else printf("NO");
}
