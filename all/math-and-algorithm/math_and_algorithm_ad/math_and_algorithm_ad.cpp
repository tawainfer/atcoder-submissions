#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int n, x; cin >> n >> x;
  set<int> s;
  while(cin >> n) s.insert(n);
  if(s.count(x)) cout << "Yes";
  else cout << "No";
}