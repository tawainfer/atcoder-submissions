#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, a, b;
  cin >> n >> a >> b;
  for(int i = 0;; i++) {
    if(i % 2 == 0) {
      if(n > 0) n = max(0, n - a);
      else {
        cout << "Bug\n";
        return 0;
      }
    } else {
      if(n > 0) n = max(0, n - b);
      else {
        cout << "Ant\n";
        return 0;
      }
    }
  }
}