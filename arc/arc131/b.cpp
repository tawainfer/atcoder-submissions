// https://atcoder.jp/contests/arc131/submissions/28703719

#include <bits/stdc++.h>
using namespace std;
int main() {
  string judge = " ";
  int h, w; cin >> h >> w;
  char c[h][w];
  bool c1 = false, c2 = false, c3 = false, c4 = false, c5 = false;
  for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) cin >> c[i][j];
for(int i = 0; i < h; i++) {
  for(int j = 0; j < w; j++) {
    if(c[i][j] == '.') {
      if(i != 0) judge += c[i-1][j];
      if(j != 0) judge += c[i][j-1];
      if(i != h-1) judge += c[i+1][j];
      if(j != w-1) judge += c[i][j+1];
      for(int k = 0; k < judge.size(); k++) {
        if(judge[k] == '1') c1 = true;
        else if(judge[k] == '2') c2 = true;
        else if(judge[k] == '3') c3 = true;
        else if(judge[k] == '4') c4 = true;
        else c5 = true;
      }
      if(c1 == false) c[i][j] = '1';
      else if(c2 == false) c[i][j] = '2';
      else if(c3 == false) c[i][j] = '3';
      else if(c4 == false) c[i][j] = '4';
      else c[i][j] = '5';
      c1 = false;
      c2 = false;
      c3 = false;
      c4 = false;
      c5 = false;
      judge = " ";
    }
  }
}
  
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cout << c[i][j];
    }
    cout << "\n";
  }
}
