// https://atcoder.jp/contests/abc080/submissions/30402477

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, fx = 0; cin >> n;
  int x = n;
  while(x) {
    fx += x % 10;
    x /= 10;
  }
  cout << (n % fx == 0 ? "Yes" : "No");
}
