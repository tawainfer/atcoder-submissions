#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int a, b, c, d; cin >> a >> b >> c >> d;
  cout << abs(a - c) + abs(b - d) + 1 << "\n";
}