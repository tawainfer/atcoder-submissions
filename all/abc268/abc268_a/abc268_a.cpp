#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  set<int> s;
  int x;
  while(cin >> x) s.insert(x);
  
  cout << s.size() << "\n";
  return 0;
}