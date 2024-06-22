#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(2 * n);
  for(auto &z : a) cin >> z;

  set<int> se;
  for(int i = 0; i < 2 * n - 2; i++) {
    int j = i + 2;
    // for(int j = i + 2; j < 2 * n; j++) {
    if(a[i] == a[j]) {
      se.insert(a[i]);
    }
    // }
  }

  cout << se.size();
}