#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> p(n), c(n);
  set<int> se[n];
  for(int i = 0; i < n; i++) {
    cin >> p[i] >> c[i];
    int f;
    for(int j = 0; j < c[i]; j++) {
      cin >> f;
      se[i].insert(f);
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(p[i] < p[j]) continue;
      
      bool check = true;
      for(int x : se[i]) {
        if(se[j].find(x) == se[j].end()) {
          check = false;
          break;
        }
      }
      if(!check) continue;

      if(p[i] > p[j]) {
        cout << "Yes";
        return 0;
      }

      for(int x : se[j]) {
        if(se[i].find(x) == se[i].end()) {
          cout << "Yes";
          return 0;
        }
      }
    }
  }

  cout << "No";
  return 0;
}