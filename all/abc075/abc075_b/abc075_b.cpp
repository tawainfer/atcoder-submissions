#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int h, w; cin >> h >> w;
  char mine[h+2][w+2];
  for(int i = 1; i <= h; i++) for(int j = 1; j <= w; j++) {
    cin >> mine[i][j];
    if(mine[i][j] == '.') mine[i][j] = '0';
  }
  for(int i = 1; i <= h; i++) {
    for(int j = 1; j <= w; j++) {
      if(mine[i][j] == '#') {
        if(mine[i-1][j-1] != '#') mine[i-1][j-1]++;
        if(mine[i][j-1] != '#') mine[i][j-1]++;
        if(mine[i+1][j-1] != '#') mine[i+1][j-1]++;
        if(mine[i-1][j] != '#') mine[i-1][j]++;
        if(mine[i+1][j] != '#') mine[i+1][j]++;
        if(mine[i-1][j+1] != '#') mine[i-1][j+1]++;
        if(mine[i][j+1] != '#') mine[i][j+1]++;
        if(mine[i+1][j+1] != '#') mine[i+1][j+1]++;
      }
    }
  }
  for(int i = 1; i <= h; i++) {
    for(int j = 1; j <= w; j++) cout << mine[i][j];
    cout << "\n";
  }
}