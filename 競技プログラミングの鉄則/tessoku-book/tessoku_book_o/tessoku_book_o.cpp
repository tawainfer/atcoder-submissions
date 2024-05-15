#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  set<int> se;
  for(auto &z : a) {
    cin >> z;
    se.insert(z);
  }
  
  vector<int> b;
  for(auto x : se) {
    b.push_back(x);
  }
  
  map<int, int> m; // num, pos
  for(int i = 0; i < b.size(); i++) {
    m[b[i]] = i + 1;
  }

  for(auto x : a) {
    cout << m[x] << " ";
  }
}