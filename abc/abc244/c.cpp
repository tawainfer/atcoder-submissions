// https://atcoder.jp/contests/abc244/submissions/30292833

#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, n; cin >> n;
  set<int> alr;
  alr.insert(1);
  cout << 1 << endl;
  
  while(cin >> a) {
    alr.insert(a);
    if(a == 0) return 0;
    else {
      for(int i = 1; i <= 2 * n + 1; i++) {
        if(!alr.count(i)) {
          alr.insert(i);
          cout << i << endl;
          break;
        }
      }
    }
  }
  
}
