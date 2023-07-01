// https://atcoder.jp/contests/abc080/submissions/30402208

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, a, b; cin >> n >> a >> b;
  cout << min(a * n, b);
}
