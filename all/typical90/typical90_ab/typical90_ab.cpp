#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;

  int field[1009][1009];
  for(int i = 0; i < 1009; i++)
    for(int j = 0; j < 1009; j++) field[i][j] = 0;

  vector<int> lx(n), ly(n), rx(n), ry(n);
  for(int i = 0; i < n; i++) {
    cin >> lx[i] >> ly[i] >> rx[i] >> ry[i];
    // lx[i]--;
    // ly[i]--;
    // rx[i]--;
    // ry[i]--;

    field[ly[i]][lx[i]]++;
    field[ly[i]][rx[i]]--;
    field[ry[i]][lx[i]]--;
    field[ry[i]][rx[i]]++;
  }

  for(int i = 0; i < 1009; i++) {
    for(int j = 1; j < 1009; j++) {
      field[i][j] += field[i][j - 1];
    }
  }

  for(int i = 1; i < 1009; i++) {
    for(int j = 0; j < 1009; j++) {
      field[i][j] += field[i - 1][j];
    }
  }

  vector<int> ans(n + 1, 0);
  for(int i = 0; i < 1009; i++) {
    for(int j = 0; j < 1009; j++) {
      ans[field[i][j]]++;
    }
  }

  for(int i = 1; i <= n; i++) {
    cout << ans[i];
    cout << (i == n ? "\n" : " ");
  }
}