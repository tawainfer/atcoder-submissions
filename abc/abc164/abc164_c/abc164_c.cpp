#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n; cin >> n;
  string c;
  set<string> s;
  while(cin >> c) s.insert(c);
  cout << s.size();
}