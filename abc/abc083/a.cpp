// https://atcoder.jp/contests/abc083/submissions/30402150

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int a, b, c, d; cin >> a >> b >> c >> d;
  a += b;
  c += d;
  if(a > c) cout << "Left";
  else if(a < c) cout << "Right";
  else cout << "Balanced";
}
