// https://atcoder.jp/contests/arc035/submissions/42076170

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> t(n);
  map<int, int> cnt;
  for(int &z : t) {
    cin >> z;
    cnt[z]++;
  }
  sort(t.begin(), t.end());

  long long time = 0;
  long long ans = 0;
  const int mod = 1000000007;

  for(int x : t) {
    time += x;
    ans += time;
  }
  cout << ans << endl;

  ans = 1;
  for(auto p : cnt) {
    int x = p.second;
    while(x > 0) {
      ans *= x;
      ans %= mod;
      x--;
    }
  }

  cout << ans << endl;
}
