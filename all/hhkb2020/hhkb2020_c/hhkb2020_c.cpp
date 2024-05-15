#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;
  vector<int> p(n);
  for(auto& z : p) cin >> z;
  set<int> check;
  int min = 0;

  for(int i = 0; i < n; i++) {
    check.insert(p[i]);

    if(!check.count(min)) {
      cout << min << "\n";
    } else {
      while(1) {
        min++;
        if(!check.count(min)) {
          cout << min << "\n";
          break;
        }
      }
    }
  }
}