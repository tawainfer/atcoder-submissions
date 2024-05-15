#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  deque<int> machi;
  for(int i = 1; i <= n; i++) machi.push_back(i);

  set<int> uketuke;
  set<int> iku;
  
  int t, x;
  while(cin >> t) {
    if(t == 1) {
      uketuke.insert(machi.front());
      machi.pop_front();
    }

    if(t == 2) {
      cin >> x;
      iku.insert(x);
      uketuke.erase(x);
    }

    if(t == 3) {
      cout << *uketuke.begin() << endl;
    }
  }
}