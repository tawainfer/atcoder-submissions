// https://atcoder.jp/contests/abc026/submissions/33231783

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

  int n;
  cin >> n;

  vector<int> buka[39];
  vector<int> b(n);
  int m = -1;
  reps(i, 2, n) {
    int x;
    cin >> x;
    buka[x].push_back(i);
    m = max(m, x);
  }

  vector<int> money(39, 0);
  rreps(i, n, 1) {
    if(i > m) money[i] = 1;
    else {
      int sum = 0;
      int ma = -1e9;
      int mi = 1e9;

      fore(z, buka[i]) {
        sum += money[z];
        ma = max(ma, money[z]);
        mi = min(mi, money[z]);
      }
      
      money[i] = ma + mi + 1;
    }
  }

  cout << money[1];
  return 0;
}
