// https://atcoder.jp/contests/abc299/submissions/40863858

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int l = 1;
  int r = n;

  int x;
  while(r - l > 1) {
    int mid = (r + l) / 2;
    cout << "? " << mid << endl;
    cin >> x;
    if(x == 0) l = mid;
    else r = mid;
  }

  cout << "! " << l;
}
