#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<char>> f(8, vector<char>(8));
  for(int i = 0; i < 8; i++) {
    for(int j = 0; j < 8; j++) {
      cin >> f[i][j];
    }
  }

  vector<vector<bool>> b(8, vector<bool>(8, false));
  for(int i = 0; i < 8; i++) {
    for(int j = 0; j < 8; j++) {
      if(f[i][j] == '#') {
        for(int k = 0; k < 8; k++) {
          b[i][k] = true;
          b[k][j] = true;
        }
      }
    }
  }

  int ans = 0; 
  for(int i = 0; i < 8; i++) {
    for(int j = 0; j < 8; j++) {
      if(!b[i][j]) {
        ans++;
      }
    }
  }

  cout << ans;
}