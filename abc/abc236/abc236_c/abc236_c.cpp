#include<bits/stdc++.h>
using namespace std;
int main() {
  int n, m; cin >> n >> m;
  string s[n], t[m];
  for(int g = 0; g < n; g++) cin >> s[g];
  for(int h = 0; h < m; h++) cin >> t[h];
  
  int i = 0;
  int k = 0;
  for(; i < m; i++) {
    while(1) {
      if(t[i] == s[k]) {
        k++;
        cout << "Yes" << "\n";
        break;
      } else {
        k++;
        cout << "No" << "\n";
      }
    }
  }
}