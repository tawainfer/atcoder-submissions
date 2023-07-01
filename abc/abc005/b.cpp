// https://atcoder.jp/contests/abc005/submissions/30781804

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, ans = 1e9; cin >> n;
  while(cin >> n) ans = min(ans, n);
  cout << ans << endl;
}
