#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int m, n; cin >> n >> m;
  vector<int> a(n);
  vector<int> b(m);
  for(auto& z : a) cin >> z;
  for(auto& z : b) cin >> z;
  
  for(int i = 0; i < m; i++) {
    for(int j = 0; j < a.size(); j++) {
      if(b[i] == a[j]) {
        a.erase(a.begin() + j);
        break;
      }
      if(j == a.size()-1) {cout << "No"; return 0;}
    }
    
  }
  cout << "Yes";
}