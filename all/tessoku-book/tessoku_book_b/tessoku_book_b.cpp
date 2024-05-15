#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  set<int> se;
  int a;
  while(cin >> a) se.insert(a);

  cout << (se.find(x) != se.end() ? "Yes" : "No");
}