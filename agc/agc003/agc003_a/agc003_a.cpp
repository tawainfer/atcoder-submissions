#include <bits/stdc++.h>
using namespace std;
int main() {
  string s; cin >> s;
  set<char> c;
  vector<bool> news(4, false);
  for(auto x : s) {
    c.insert(x);
    if(x == 'N') news[0] = true;
    if(x == 'E') news[1] = true;
    if(x == 'W') news[2] = true;
    if(x == 'S') news[3] = true;
  }
  if(c.size() == 4) cout << "Yes";
  else if(c.size() == 2) {
    if(news[0] == news[3]) cout << "Yes";
    else cout << "No";
  } else cout << "No";
}