// https://atcoder.jp/contests/arc152/submissions/37477330

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n, l;
  cin >> n >> l;

  int a;
  while(cin >> a) {
    if(a == 1) {
      if(l > 0) l -= 2;
    } else {
      if(l > 1) l -= 3;
      else {
        cout << "No";
        return 0;
      }
    }
  }

  cout << "Yes";
  return 0;
}
