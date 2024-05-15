#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(8);
  for(auto &z : a) cin >> z;

  for(int i = 1; i < 8; i++) {
    if(a[i - 1] > a[i]) {
      cout << "No";
      return 0;
    }
  }

  for(int x : a) {
    if(!(100 <= x && x <= 675)) {
      cout << "No";
      return 0;
    }
  }

  for(int x : a) {
    if(x % 25 != 0) {
      cout << "No";
      return 0;
    }
  }

  cout << "Yes";
  return 0;
}