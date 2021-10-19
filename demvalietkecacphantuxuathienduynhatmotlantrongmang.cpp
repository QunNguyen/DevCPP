#include<stdio.h>
 
const int MAX = 1e6;
int cnt[MAX];
 
int main(){
    int n;
    scanf("%d", &n);
    if(n<3) return 0;
    
    int a[100];
    for(int i = 0; i < n ;i++){
        {
            scanf("%d", a[i]);
        }
    }
    for(int i = 0;i < MAX; i++) cnt[i] = 0;
    for(int i = 0; i < n;i++){
        cnt[a[i]]++;
    }
    for(int i = 0;i < MAX; i++){
        if(cnt[i] > 0){
            printf("%d",i);
        }
    }
}
