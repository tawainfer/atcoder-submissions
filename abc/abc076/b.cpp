// https://atcoder.jp/contests/abc076/submissions/30493617

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll n, k, a = 1; cin >> n >> k;
  while(n--) a = min(a * 2, a + k);
  cout << a;
}
