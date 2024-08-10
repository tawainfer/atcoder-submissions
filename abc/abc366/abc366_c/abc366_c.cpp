#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;

  map<int, int> ma;
  multiset<int> se;
  int cnt = 0;
  for(int i = 0; i < q; i++) {
    int t;
    cin >> t;

    if(t == 1) {
      int x;
      cin >> x;
      se.insert(x);
      if(ma[x] == 0) cnt++;
      ma[x]++;
    } else if(t == 2) {
      int x;
      cin >> x;
      se.erase(se.find(x));
      ma[x]--;
      if(ma[x] == 0) cnt--;
    } else if(t == 3) {
      cout << cnt << endl;
    }
  }
}