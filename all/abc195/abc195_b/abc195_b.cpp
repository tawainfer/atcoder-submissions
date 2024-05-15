#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);

  double a, b, w;
  cin >> a >> b >> w;
  w *= 1000;

  for(int i = 1; i <= 1000000; i++) {
    if(w / i >= a && w / i <= b) {
      cout << i << "\n";
      break;
    }
    if(i == 1000000) {
      cout << "UNSATISFIABLE";
      return 0;
    }
  }

  for(int i = 1000000; i > 0; i--) {
    if(w / i >= a && w / i <= b) {
      cout << i << "\n";
      break;
    }
  }
}