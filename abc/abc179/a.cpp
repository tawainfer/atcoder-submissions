// https://atcoder.jp/contests/abc179/submissions/25869831

#include <bits/stdc++.h>
using namespace std;

int main(){
	string S;
	cin >> S;
	int len = S.length();
	
	if(S[len-1] == 's') {
		S += "es";
	} else {
		S += "s";
	}
	cout << S;
}

