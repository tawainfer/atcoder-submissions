// https://atcoder.jp/contests/abc301/submissions/41351553

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (auto &z : a) cin >> z;

  cout << a[0] << " ";

  for (int i = 1; i < a.size(); i++) {
    if (a[i - 1] < a[i]) {
      for (int j = a[i - 1] + 1; j < a[i]; j++) {
        cout << j << " ";
      }
      cout << a[i] << " ";
    } else {
      for(int j = a[i - 1] - 1; j > a[i]; j--) {
        cout << j << " ";
      }
      cout << a[i] << " ";
    }
  }
}
