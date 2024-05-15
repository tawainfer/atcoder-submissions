#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;

  vector<int> a;
  for(int i = 0; i < q; i++) {
    int t;
    cin >> t;

    if(t == 1) {
      int x;
      cin >> x;
      a.push_back(x);
    } else if(t == 2) {
      int k;
      cin >> k;
      cout << a[a.size() - 1 - (k - 1)] << endl;
    }
  }
}