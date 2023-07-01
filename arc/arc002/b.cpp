// https://atcoder.jp/contests/arc002/submissions/33212775

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define nextp(v) next_permutation(all(v))
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i >= b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i >= b; i -= c)
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s;
  cin >> s;

  string a = "", b = "", c = "";
  rep(i, 0, 4) a += s[i];
  rep(i, 5, 7) b += s[i];
  rep(i, 8, 10) c += s[i];

  int y = stoi(a);
  int m = stoi(b);
  int d = stoi(c);

  vector<int> last = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  for(int i = y; i <= 10000; i++) {
    for(int j = m; j <= 12; j++) {
      if(m != 1) m = 1;

      if(y % 4 == 0) {
        if(y % 100 == 0 && y % 400 != 0) last[2] = 28;
        else last[2] = 29;
      }

      for(int k = d; k <= last[j]; k++) {
        if(d != 1) d = 1;

        if(i % j == 0) {
          if((i / j) % k == 0) {
            cout << i << "/";
            if(j < 10) cout << 0;
            cout << j << "/";
            if(k < 10) cout << 0;
            cout << k << endl;
            return 0;
          }
        }
      }
    }
  }
}
