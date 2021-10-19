#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        char a[200];
        gets(a);
        int dem = 1;
        for(int i = 0 ; i< strlen(a)-1 ; i++) // gia su 1 mang co do dai 200 0 - 199 neu khai bao i = 0 i < strlen(a) thi a[i+1] se co luc 
        // chay den a[199] && a[200] ma o day thi k co 200 suy ra a[200] la gia tri rac .
        {
            if(a[i] == ' ' && a[i+1] != ' ')
            {
                dem++;
            }
        }
        printf("%d\n", dem);
    }
}
