#include <bits/stdc++.h>
using namespace std;

int main() {
  int m;
  cin >> m;

  vector<int> d(m);
  vector<int> e(m + 1, 0);
  int sum = 0;
  for(auto &z : d) {
    cin >> z;
    sum += z;
  }

  for(int i = 0; i < m; i++) {
    e[i + 1] = e[i] + d[i];
  }
  
  int mid = sum / 2 + 1;
  int s = 0;
  // cout << mid << endl;

  for(int i = 0; i < m; i++) {
    s += d[i];
    // cout << i << " " << s << endl;
    if(s >= mid) {
      cout << i + 1 << " ";
      // if(i == 0) cout << s;
      cout << mid - e[i];
      return 0;
    }
  }
}