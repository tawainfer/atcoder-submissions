// https://atcoder.jp/contests/abc155/submissions/30529533

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n; cin >> n;
  vector<string> s(n);
  for(auto& z : s) cin >> z;
  sort(all(s));

  int cnt = 0, ma = 0;
  for(int i = 0; i < n; i++) {
    if(i == 0) cnt++;
    else {
      if(s[i] == s[i-1]) cnt++;
      else {
        ma = max(cnt, ma);
        cnt = 1;
      }
    }
  }
  ma = max(cnt, ma);

  int count = 0;
  bool flag = false;
  for(int i = 0; i < n; i++) {
    if(i == 0) count++;
    else {
      if(s[i] == s[i-1]) count++;
      else count = 1;
    }
    
    if(count == ma) {
      if(i == n - 1) flag = true;
      cout << s[i] << "\n";
      count = 1;
    }
  }

  if(!flag && count == ma) cout << s[n-1] << "\n";
}
