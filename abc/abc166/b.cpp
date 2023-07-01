// https://atcoder.jp/contests/abc166/submissions/27952512

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k, d, a, ans = 0; cin >> n >> k;
  int snuke[n] = {0};
  for(int i = 0; i < k; i++) {
    cin >> d;
    for(int j = 0; j < d; j++) {
      cin >> a;
      snuke[a-1]++; 
    }
  }
  for(int i = 0; i < n; i++) if(snuke[i] == 0) ans++;
  cout << ans;
}
