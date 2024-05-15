#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int x, y;
  bool init = true;
  cin >> x >> y;

  for(int i = x; i < 48; i++) {
    string s = to_string(i % 24);
    if(s.size() == 1) s = "0" + s;

    for(int j = 0; j < 60; j++) {
      if(init) {
        j = y;
        init = false;
      }
      string t = to_string(j);
      if(t.size() == 1) t = "0" + t;

      string u = "";
      u += s[0];
      u += t[0];

      string v = "";
      v += s[1];
      v += t[1];

      int h = stoi(u);
      int m = stoi(v);

      if(0 <= h && h < 24 && 0 <= m && m < 60) {
        cout << i % 24 << " " << j << endl;
        return 0;
      }
    }
  }
}