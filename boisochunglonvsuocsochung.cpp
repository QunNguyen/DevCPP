#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdbool.h>
int fibonacci(int n){
	if(n==1){
		return 0;
	}
	if(n==2){
		return 1;
	}
	return fibonacci(n-1)+fibonacci(n-2);
}
int fibonacci(int);
bool songuyento(int);
int tongchuso(int);
int main(){
	int a,b,i;
	scanf("%d%d",&a,&b);
	if(a<b){
		for(i=a;i<=b;i++){
			if(songuyento(i)){
				int n;
				for(n=1;n<35;n++){
					if(tongchuso(i)==fibonacci(n)){
						printf("%d ",i);
					}
				}
			}
		}
	}
	if(a>b){
		for(i=b;i<=a;i++){
			if(songuyento(i)){
				int n;
				for(n=1;n<35;n++){
					if(tongchuso(i)==fibonacci(n)){
						printf("%d ",i);
					}
				}
			}
		}
	}
	return 0;
}
int tongchuso(int n){
	int sum=0,k;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

bool songuyento(int n){
	if(n<2){
		return false;
	}
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}return true;
}

