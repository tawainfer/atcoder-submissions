#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> p(n);
  for(auto &z : p) cin >> z;

  int q;
  cin >> q;

  for(int _ = 0; _ < q; _++) {
    int a, b;
    cin >> a >> b;
    
    for(auto x : p) {
      if(x == a) {
        cout << a << endl;
        break;
      } else if(x == b) {
        cout << b << endl;
        break;
      }
    }
  }
}