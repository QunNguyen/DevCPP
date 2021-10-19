#include<stdio.h>
#include<math.h>

int check(int n){
    int sum = 0;//khai bao biem sum
    for(int i=1;i<=n/2;i++){
        if(n%i==0) 
            sum+=i;
    }
    if(sum==n) return 1; // tra ve true
    return 0;
}

int main(){
    int b,a;
    scanf("%d%d",&a,&b);
    int x,y;
    if(a>b)
    {
    	x=b;
    	y=a;
	}
	else
	{
		x=a;
		y=b;
	}
    for(int i=x;i<=y;i++)
    {
	    if(check(i)==1 )
	    {
	    	printf("%d ",i);
		}
	}
        
    return 0;
}
