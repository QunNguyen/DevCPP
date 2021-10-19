#include<stdio.h>
int check(int n){
    int sum = 0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0) 
            sum+=i;
    }
    if(sum==n) return 1;
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    if(check(n)==1 )
    {
    	printf("%d",1);
	}
    else printf("%d",0);
        
    return 0;
}
