#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main() {
  int n, j, cnt = 0; cin >> n;
  string ans = "NO";
  int p[n];
  for(int i = 0; i < n; i++) {
    cin >> p[i];
  }
  
        for(int k = 0; k < n - 1; k++) {
        if(p[k] < p[k + 1]) {
          cnt++;
        }
      }
      if(cnt == n - 1) ans = "YES";
      cnt = 0;
  
  for(int i = 0; i < n; i++) {
    for(j = i + 1; j < n; j++) {
      swap(p[i], p[j]);
      for(int k = 0; k < n - 1; k++) {
        if(p[k] < p[k + 1]) {
          cnt++;
        }
      }
      if(cnt == n - 1) ans = "YES";
      cnt = 0;
      swap(p[i], p[j]);
    }
  } 
  cout << ans;
}