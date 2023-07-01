// https://atcoder.jp/contests/abc086/submissions/30402183

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int a, b; cin >> a >> b;
  cout << (a * b % 2 == 1 ? "Odd" : "Even");
}
