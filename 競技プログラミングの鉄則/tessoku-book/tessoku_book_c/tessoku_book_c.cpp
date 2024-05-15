#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> p(n), q(n);
  for(int &z : p) cin >> z;
  for(int &z : q) cin >> z;

  for(int x : p) {
    for(int y : q) {
      if(x + y == k) {
        cout << "Yes";
        return 0;
      }
    }
  }

  cout << "No";
}