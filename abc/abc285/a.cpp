// https://atcoder.jp/contests/abc285/submissions/38044920

#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  vector<int> g[16];
  g[1].push_back(2);
  g[2].push_back(1);
  g[1].push_back(3);
  g[3].push_back(1);
  g[2].push_back(4);
  g[4].push_back(2);
  g[2].push_back(5);
  g[5].push_back(2);
  g[4].push_back(8);
  g[8].push_back(4);
  g[4].push_back(9);
  g[9].push_back(4);
  g[5].push_back(10);
  g[10].push_back(5);
  g[5].push_back(11);
  g[11].push_back(5);
  g[3].push_back(6);
  g[6].push_back(3);
  g[3].push_back(7);
  g[7].push_back(3);
  g[6].push_back(12);
  g[12].push_back(6);
  g[6].push_back(13);
  g[13].push_back(6);
  g[7].push_back(14);
  g[14].push_back(7);
  g[7].push_back(15);
  g[15].push_back(7);

  for(auto &z : g[a]) {
    if(z == b) {
      cout << "Yes";
      return 0;
    }
  }

  cout << "No";
}
