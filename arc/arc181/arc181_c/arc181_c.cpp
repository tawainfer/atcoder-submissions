#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> p(n), q(n);
  for(auto &z : p) {
    cin >> z;
    z--;
  }
  for(auto &z : q) {
    cin >> z;
    z--;
  }

  vector<vector<int>> f(n, vector<int>(n, -1));
  for(int i = 0; i < n / 2; i++) {
    for(int j = 0; j < n; j++) {
      if(f[p[n - 1 - i]][j] == -1) {
        f[p[n - 1 - i]][j] = 1;
      }
    }
    for(int j = 0; j < n; j++) {
      if(f[j][q[n - 1 - i]] == -1) {
        f[j][q[n - 1 - i]] = 1;
      }
    }

    for(int j = 0; j < n; j++) {
      if(f[p[i]][j] == -1) {
        f[p[i]][j] = 0;
      }
    }
    for(int j = 0; j < n; j++) {
      if(f[j][q[i]] == -1) {
        f[j][q[i]] = 0;
      }
    }
  }

  if(n % 2 != 0) {
    for(int j = 0; j < n; j++) {
      if(f[p[n / 2]][j] == -1) {
        f[p[n / 2]][j] = 1;
      }
    }
    for(int j = 0; j < n; j++) {
      if(f[j][q[n / 2]] == -1) {
        f[j][q[n / 2]] = 1;
      }
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cout << f[i][j];
    }
    cout << endl;
  }
}