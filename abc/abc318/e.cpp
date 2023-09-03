// https://atcoder.jp/contests/abc318/submissions/45206526

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  vector<ll> l(n + 1, 0);
  vector<ll> r(n + 1, 0);
  for(auto &z : a) {
    cin >> z;
    r[z]++;
  }
  r[a[0]]--;

  ll ans = 0;
  ll sum = 0;
  vector<ll> score(n + 1, 0);
  for(int i = 1; i < n; i++) {
    sum -= score[a[i - 1]];
    l[a[i - 1]]++;
    r[a[i]]--;
    score[a[i - 1]] = l[a[i - 1]] * r[a[i - 1]];
    sum += score[a[i - 1]];
    ans += sum - score[a[i]];
  }

  cout << ans;
  return 0;
}
