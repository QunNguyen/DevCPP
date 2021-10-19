#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, st, token;
    getline (cin, s);
    stringstream ss(s);
    string a[100];
    int dem=0;
    while (ss>>token)
    {
        a[dem++]=token;
        
    }
    int res[100]={0};
    for (int i=0; i<dem; i++)
    {
        if (!res[i])
        for (int j=i+1; j<dem; j++)
        {
            if (a[i]==a[j]) res[j]=1;
        }
    }
    for (int i=0; i<dem; i++)
    {
        if (!res[i]) cout << a[i] << " ";
    }
    return 0;
}
