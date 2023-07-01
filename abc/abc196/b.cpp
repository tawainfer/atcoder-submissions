// https://atcoder.jp/contests/abc196/submissions/26988225

#include <bits/stdc++.h>
using namespace std;
int main() {
  string x; cin >> x;
  for(int i = 0; i < x.size(); i++) {
    if(x.at(i) == '.') return 0;
    else cout << x.at(i);
  }
}
