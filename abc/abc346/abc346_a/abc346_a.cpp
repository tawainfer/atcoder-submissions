#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  deque<int> a(n);
  for(auto &z : a) cin >> z;

  while(a.size() >= 2) {
    cout << a[0] * a[1] << " ";
    a.pop_front();
  }
}