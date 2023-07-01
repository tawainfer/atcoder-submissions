// https://atcoder.jp/contests/abc239/submissions/29455391

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  
  long long x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  double dis = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
  x1 += 1;
  y1 += 2;
  if((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) == 5) {cout << "Yes"; return 0;}
  y1 -= 4;
  if((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) == 5) {cout << "Yes"; return 0;}
  x1 -= 2;
    if((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) == 5) {cout << "Yes"; return 0;}
  y1 += 4;
    if((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) == 5) {cout << "Yes"; return 0;}
  x1--;
  y1--;
    if((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) == 5) {cout << "Yes"; return 0;}
  y1 -= 2;
    if((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) == 5) {cout << "Yes"; return 0;}
  x1 += 4;
    if((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) == 5) {cout << "Yes"; return 0;}
  y1 += 2;
    if((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) == 5) {cout << "Yes"; return 0;}
  cout << "No";
}
