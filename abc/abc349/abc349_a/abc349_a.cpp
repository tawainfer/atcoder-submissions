#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n - 1);
  for(auto &z : a) cin >> z;

  int s = 0;
  for(int x : a) {
    s += x;
  }

  cout << -s;
}