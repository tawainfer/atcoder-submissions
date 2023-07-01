// https://atcoder.jp/contests/abc122/submissions/32862867

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

  int n, q;
  cin >> n >> q;

  string s;
  cin >> s;

  vector<int> ruiseki(n - 1, 0);
  rep(i, 0, n - 1) {
    if(i == 0) {
      if(s[0] == 'A' && s[1] == 'C') ruiseki[0]++;
    } else {
      ruiseki[i] = ruiseki[i - 1];
      if(s[i] == 'A' && s[i + 1] == 'C') ruiseki[i]++;
    }
  }

  int l, r;
  while(cin >> l >> r) {
    l -= 2;
    r -= 2;
    cout << ruiseki[r] - ruiseki[l] << "\n";
  }
}
