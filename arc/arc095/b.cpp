// https://atcoder.jp/contests/abc094/submissions/42773291

#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(int &z : a) cin >> z;
  sort(a.begin(), a.end());

  int ma = -INF;
  int ai = a.back();
  int aj = -1;
  a.pop_back();

  for(int x : a) {
    int y = x;
    if(x > ai / 2) x = ai - x;
    if(x > ma) {
      ma = x;
      aj = y;
    }
  }

  cout << ai << " " << aj << endl;
  return 0;
}
