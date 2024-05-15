#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, h, k;
  cin >> n >> m >> h >> k;

  string s;
  cin >> s;

  vector<pair<int, int>> v;
  map<pair<int, int>, int> ma;
  int x, y;
  for(int i = 0; i < m; i++) {
    cin >> x >> y;
    v.push_back(make_pair(x, y));
    ma[make_pair(x, y)]++;
    // cout << x << " " << y << " " << ma[make_pair(x, y)] << endl;
  }

  int cx = 0;
  int cy = 0;

  int hp = h;
  bool check = false;
  // if(ma[make_pair(0, 0)] != 0) {
  //   ma[make_pair(0, 0)] = 0;
  //   check = true;
  // }

  for(int i = 0; i < s.size(); i++) {
    char c = s[i];
    if(c == 'R') cx++;
    if(c == 'L') cx--;
    if(c == 'U') cy++;
    if(c == 'D') cy--;
    // cout << cx << " " << cy << endl;

    hp--;
    // cout << hp << " " << c << endl;
    if(hp < 0) {
      cout << "No";
      return 0;
    }

    if(i == s.size() - 1) {
      break;
    }
    // cx = ex;
    // cy = ey;
    // if(i == 0) {
    //   continue;
    // }
    // cout << hp << " " << c << endl;

    // cout <<"map"<< i << " " << ma[make_pair(cx, cy)] << endl;
    if(ma[make_pair(cx, cy)] > 0) {
      if(hp < k) {
        ma[make_pair(cx, cy)]--;
        // cout << cx <<  " " << cy << endl;
        hp = k;
      }
    } 

    // if(check) if(hp < k) hp = k;
  }

  cout << "Yes";
}