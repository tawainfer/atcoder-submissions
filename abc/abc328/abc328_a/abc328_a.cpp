#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  vector<int> a(n);
  for(auto &z : a) cin >> z;

  int sum = 0;
  for(auto z : a) {
    if(z <= x) {
      sum += z;
    }
  }

  cout << sum;
}