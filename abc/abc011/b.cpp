// https://atcoder.jp/contests/abc011/submissions/30758204

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s; cin >> s;
  for(int i = 0; i < s.size(); i++) {
    if(i == 0) {
      if(s[i] >= 97) cout << char(s[i] - 32);
      else cout << s[i];
    } else {
      if(s[i] < 97) cout << char(s[i] + 32);
      else cout << s[i];
    }
  }
  cout << endl;
}
