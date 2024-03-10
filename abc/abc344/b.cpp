// https://atcoder.jp/contests/abc344/submissions/51027918

#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> ans;
  do {
    int x;
    cin >> x;
    ans.push_back(x);
  } while(ans.back() != 0);

  while(!ans.empty()) {
    cout << ans.back() << endl;
    ans.pop_back();
  }
}
