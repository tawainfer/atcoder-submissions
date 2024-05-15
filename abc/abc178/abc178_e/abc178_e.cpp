#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> p1, p2;
  for(int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    p1.push_back(x + y);
    p2.push_back(x - y);
  }

  sort(p1.begin(), p1.end());
  sort(p2.begin(), p2.end());

  cout << max(p1.back() - p1.front(), p2.back() - p2.front());
}