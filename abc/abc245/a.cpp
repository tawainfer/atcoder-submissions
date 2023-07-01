// https://atcoder.jp/contests/abc245/submissions/30428330

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int a, b, c, d; cin >> a >> b >> c >> d;
  if(a < c) cout << "Takahashi";
  else if(a == c) {
    if(b <= d) cout << "Takahashi";
    else cout << "Aoki";
  }
  else cout << "Aoki";
}
