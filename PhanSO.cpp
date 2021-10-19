#include<bits/stdc++.h>
using namespace std;

long long stringtonum(string s){
	long long a = 0;
	for(long long i = 0; i < s.length(); ++i){
		a = a*10 + int(s[i] - '0');
	}
	return a;
}

long long GCD(long long a, long long b){
	long long tmp;
	while(b != 0){
		tmp = a%b;
		a = b;
		 b = tmp;
	}
	return a;
}

long long LCM(long long a, long long b){
	return a*b/GCD(a,b);
}

void rutgon(long long a, long long b){
	cout << a/GCD(a,b) << "/" << b/GCD(a,b) << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	cin.ignore();
	for(long long j = 1; j <= t; ++j){
		long long a, b, c, d, tu1, mau1, tu2, mau2;
		string s;
		getline(cin, s);
		s = s+" ";
		string tmp = "";
		vector<string> v;
		vector<long long> res;
		for(long long i = 0; i < s.length(); ++i){
			if(s[i] == ' ' && tmp.length() > 0){
				v.push_back(tmp);
				tmp = "";
			}else
				tmp += s[i];
		}
		
		for(long long i = 0; i < v.size(); ++i){
			long long tp = stringtonum(v[i]);
			res.push_back(tp);
		}
		tu1 = res[0];
		mau1 = res[1];
		tu2 = res[2];
		mau2 = res[3];
		
		a = tu1/GCD(tu1, mau1);
		b = mau1/GCD(tu1, mau1);
		c = tu2/GCD(tu2, mau2);
		d = mau2/GCD(tu2, mau2);
		
		cout << "Case #" << j << ":" << endl;
		cout << a*LCM(b,d)/b << "/" << LCM(b,d) << " " << c*LCM(b,d)/d << "/" << LCM(b,d) << endl;
		long long tong = a*LCM(b,d)/b + c*LCM(b,d)/d;
		rutgon(tong, LCM(b,d));
		long long tu = a*d;
		long long mau = b*c;
		rutgon(tu, mau);
	}
	return 0;
}

