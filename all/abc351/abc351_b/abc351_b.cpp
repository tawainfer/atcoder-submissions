#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<char>> a(n, vector<char>(n));
  vector<vector<char>> b(n, vector<char>(n));

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> b[i][j];
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(a[i][j] != b[i][j]) {
        cout << i + 1 << " " << j + 1 << endl;
      }
    }
  }
}