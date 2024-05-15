#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n);
  set<int> s;
  for(auto &z : a) {
    cin >> z;
    s.insert(z);
  }

  int last = -1;
  for(auto &z : s) {
    if(k <= 0) break;
    if(last + 1 != z) break;
    last = z;
    k--;
  }

  cout << last + 1;
  return 0;
}