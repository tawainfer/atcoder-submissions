#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  
  vector<int> a = {0};
  for(int i = 1; i <= n; i++) a.push_back(i);
  
  int t, x, y;
  bool rev = false;

  while(cin >> t) {
    if(t == 1) {
      cin >> x >> y;
      if(rev) x = n - x + 1;
      a[x] = y;
    }
    
    if(t == 2) {
      rev = !rev;
    }
    
    if(t == 3) {
      cin >> x;
      if(rev) x = n - x + 1;
      cout << a[x] << endl;
    }
  }
}