#include<stdio.h> 
int main(){ int n,arr[99],i; scanf("%d",&n); for(i=0;i<n;i++){ scanf("%d",&arr[i]); } int max = arr[0]; for(i=0;i<n;i++){ if(arr[i]>max){ max = arr[i]; } } int max2 = 0; for(i=0;i<n;i++){ if(arr[i]>max2 && arr[i]<max){ max2 = arr[i]; } } printf("%d %d",max,max2); } //AC//
