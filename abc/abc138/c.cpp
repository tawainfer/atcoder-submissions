// https://atcoder.jp/contests/abc138/submissions/28713339

#include<bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
    int v[n];
	for(int i = 0; i < n; i++) cin >> v[i];
	sort(v, v + n);
	double ans = v[0];
	for(int i = 1; i < n; i++) ans = (ans + v[i]) / 2;
	cout << fixed << setprecision(10) << ans << "\n";
}






