// https://atcoder.jp/contests/abc206/submissions/30326228

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long n;
  cin >> n;
  long long ans = n * (n - 1) / 2, cnt = 0;
  vector<long long> a(n);
  for(auto& z : a) cin >> z;
  sort(a.begin(), a.end());

  for(int i = 0; i < n; i++) {
    if(i == 0) cnt++;
    else {
      if(a[i - 1] == a[i]) cnt++;
      else {
        ans -= cnt * (cnt - 1) / 2;
        cnt = 1;
      }
    }
  }
  
  if(cnt != 1) ans -= cnt * (cnt - 1) / 2;
  cout << ans;
}
