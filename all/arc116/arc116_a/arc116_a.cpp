#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long n, t; cin >> t;
  while(cin >> n) {
    if(n % 4 == 0) cout << "Even\n";
    else if(n % 2 == 0) cout << "Same\n";
    else cout << "Odd\n";
  }
}