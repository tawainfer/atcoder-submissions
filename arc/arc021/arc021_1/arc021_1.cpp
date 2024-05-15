#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int a[5][5];
  for(int i = 1; i <= 4; i++) for(int j = 1; j <= 4; j++) {
    cin >> a[i][j];
  }

  bool flag = false;
  for(int i = 1; i <= 4; i++) {
    for(int j = 1; j <= 4; j++) {
      if(i != 1) if(a[i][j] == a[i-1][j]) flag = true;
      if(i != 4) if(a[i][j] == a[i+1][j]) flag = true;
      if(j != 1) if(a[i][j] == a[i][j-1]) flag = true;
      if(j != 4) if(a[i][j] == a[i][j+1]) flag = true;
    }
  }
  cout << (flag ? "CONTINUE\n" : "GAMEOVER\n");
}