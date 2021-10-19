#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int n;
    cin >> n;
    vector<int> a, b;
    for(int i = 0; i < n; i++)
    {
        int so;
        cin >> so;
        if (i%2) b.push_back(so);
        else a.push_back(so);
    }   
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int> ());
    int i = 0;
    while (i < a.size () && i < b.size())
    {
        cout << a[i] << ' ' << b[i] <<' ';
        i++;
    }
    while (i < a.size()) 
    {
        cout << a[i] <<' ';
        i++;
    }
    while (i < b.size()) 
    {
        cout << b[i] <<' ';
        i++;
    }
}
