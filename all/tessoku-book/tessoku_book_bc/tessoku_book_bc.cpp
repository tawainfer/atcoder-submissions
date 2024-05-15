#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;

  int x;
  set<int> se;
  
  while(cin >> q >> x) {
    if(q == 1) se.insert(x);
    if(q == 2) se.erase(x);
    if(q == 3) cout << (se.lower_bound(x) == se.end() ? -1 : *se.lower_bound(x)) << endl;
  }
}