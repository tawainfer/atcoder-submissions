// https://atcoder.jp/contests/arc046/submissions/30766278

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n; cin >> n;
  int cnt = 0;
  for(int i = 1;; i++) {
    string s = to_string(i);
    if(s.size() == 1) cnt++;
    else {
      for(int j = 1; j < s.size(); j++) {
        if(s[j] != s[0]) break;
        if(j == s.size() - 1) cnt++;
      }
    }
    
    if(cnt == n) {
      cout << i << endl;;
      return 0;
    }
  }
}
