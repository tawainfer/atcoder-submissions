// https://atcoder.jp/contests/abc173/submissions/27200105

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ac = 0, wa = 0, tle = 0, re = 0;
  string s;
  while(cin >> s) {
    if(s == "AC") ac++;
    if(s == "WA") wa++;
    if(s == "TLE") tle++;
    if(s == "RE") re++;
  }
  cout << "AC x " << ac << endl;
  cout << "WA x " << wa << endl;
  cout << "TLE x " << tle << endl;
  cout << "RE x " << re << endl;
}
