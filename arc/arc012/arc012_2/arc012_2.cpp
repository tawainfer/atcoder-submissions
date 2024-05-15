#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n; cin >> n;
  double va, vb, l; cin >> va >> vb >> l;
  double a = 0, b = l;
  while(n--) {
    double second = (b - a) / va;
    a += second * va;
    b += second * vb;
  }
  cout << fixed << setprecision(15) << b - a << "\n";
}