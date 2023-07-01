// https://atcoder.jp/contests/abc022/submissions/26619324

#include<bits/stdc++.h>
using namespace std;

int main(){
	int N, S, T, a, w = 0, ans = 0;
	cin >> N >> S >> T;
    for (int i = 0; i < N; i++){
		cin >> a;
		w += a;
		if (w >= S && w <= T){
			ans += 1;
		}
	}
	cout << ans << endl;
	return 0;
}
