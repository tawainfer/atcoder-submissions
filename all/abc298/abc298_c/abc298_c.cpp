#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  multiset<int> s[200009];
  set<int> s2[200009];

  int t;
  while(cin >> t) {
    if(t == 1) {
      int i, j;
      cin >> i >> j;
      s[j].insert(i);
      s2[i].insert(j);
    }

    if(t == 2) {
      int i;
      cin >> i;
      for(auto &z : s[i]) cout << z << " ";
      cout << endl;
    }

    if(t == 3) {
      int i;
      cin >> i;
      for(auto &z : s2[i]) cout << z << " ";
      cout << endl;
    }
  }
}