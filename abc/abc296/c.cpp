// https://atcoder.jp/contests/abc296/submissions/40227215

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  vector<int> a(n);
  for(auto &z : a) cin >> z;

  if(x == 0) {
    cout << "Yes";
    return 0;
  }

  if(x < 0) {
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++) {
      if(binary_search(a.begin(), a.end(), a[i] - x)) {
        cout << "Yes";
        return 0;
      }
    }
  } else {
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    for(int i = 0; i < n; i++) a[i] = -a[i];
    for(int i = 0; i < n; i++) {
      if(binary_search(a.begin(), a.end(), a[i] + x)) {
        cout << "Yes";
        return 0;
      }
    }
  }

  cout << "No";
}
