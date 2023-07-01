// https://atcoder.jp/contests/abc013/submissions/30783331

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int a, b; cin >> a >> b;
  cout << min(abs(a - b), 10 - abs(a - b)) << "\n";
}
