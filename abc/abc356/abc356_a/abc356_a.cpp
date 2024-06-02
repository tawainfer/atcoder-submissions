#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l, r;
  cin >> n >> l >> r;
  l--;
  r--;

  vector<int> a;
  vector<int> b;
  for(int i = 0; i < n; i++) {
    a.push_back(i + 1);
    if(l <= i && i <= r) {
      b.push_back(i + 1);
    }
  }
  

  for(int i = 0; i < n; i++) {
    if(l <= i && i <= r) {
      cout << b.back() << " ";
      b.pop_back();
    } else {
      cout << a[i] << " ";
    }
  }
}