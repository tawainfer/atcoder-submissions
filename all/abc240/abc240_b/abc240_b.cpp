#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  
  set<int> s;
  int n; cin >> n;
  while(cin >> n) {
    s.insert(n);
  }
  cout << s.size();
}