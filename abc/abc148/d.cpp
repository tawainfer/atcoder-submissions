// https://atcoder.jp/contests/abc148/submissions/30340955

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long n, ans = 0; cin >> n;
  vector<int> a(n);
  for(auto& z : a) cin >> z;
  
  int judge = 1;
  for(int i = 0; i < n; i++) {
    if(a[i] == judge) judge++;
    else ans++;
  }
  cout << ((judge > 1) ? ans : -1);
}
