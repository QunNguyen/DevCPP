#include<stdio.h>
int main()
{
	int a[101],n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 
	int temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	if(2<n&&n<100){
		for(i=1;i<n;i++){
			if(a[0]>a[i]){
				printf("%d %d",a[0],a[i]);
				break;
			}
		}
	}
}
