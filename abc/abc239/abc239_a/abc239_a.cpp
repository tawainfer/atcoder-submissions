#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  
  double x; cin >> x;
  cout << fixed << setprecision(15) << sqrt(x * (12800000 + x));
}