#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int a, l, h, n; cin >> l >> h >> n;
  while(cin >> a) {
    if(a > h) cout << -1;
    else if(l <= a && a <= h) cout << 0;
    else cout << l - a;
    cout << endl;
  }
}