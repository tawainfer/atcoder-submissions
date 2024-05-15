#include <bits/stdc++.h>
using namespace std;

int main() {
  int sx, sy, tx, ty;
  cin >> sx >> sy >> tx >> ty;
  sx += 1000;
  sy += 1000;
  tx += 1000;
  ty += 1000;

  string ptn1 = "";
  string ptn2 = "L";

  for(int i = sy + 1; i <= ty; i++) ptn1 += "U";
  for(int i = sx + 1; i <= tx; i++) ptn1 += "R";
  ptn2 += ptn1.front() + ptn1 + ptn1.back() + "D";

  ptn1 += ptn1;
  for(int i = (int)ptn1.size() / 2; i < (int)ptn1.size(); i++) {
    if(ptn1[i] == 'R') ptn1[i] = 'L';
    if(ptn1[i] == 'U') ptn1[i] = 'D';
  }
  
  ptn2 += ptn2;
  for(int i = (int)ptn2.size() / 2; i < (int)ptn2.size(); i++) {
    if(ptn2[i] == 'R') ptn2[i] = 'L';
    else if(ptn2[i] == 'L') ptn2[i] = 'R';
    else if(ptn2[i] == 'D') ptn2[i] = 'U';
    else if(ptn2[i] == 'U') ptn2[i] = 'D';
  }
  
  string ans = ptn1 + ptn2;
  cout << ans;
  return 0;
}