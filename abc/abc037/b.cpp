// https://atcoder.jp/contests/abc037/submissions/30758104

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, q, l, r, t;
  cin >> n >> q;
  vector<int> a(n + 1, 0);
  while(cin >> l >> r >> t) for(int i = l; i <= r; i++) a[i] = t;
  for(int i = 1; i <= n; i++) cout << a[i] << endl;
}
