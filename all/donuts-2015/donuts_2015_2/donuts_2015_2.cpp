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

  int n, m;
  cin >> n >> m;

  vector<int> a(n);
  fore(z, a) cin >> z;

  vector<int> b(m), c(m);
  set<int> combo_idol[m];
  rep(i, 0, m) {
    cin >> b[i] >> c[i];
    rep(j, 0, c[i]) {
      int x;
      cin >> x;
      x--;
      combo_idol[i].insert(x);
    }
  }

  int ans = -1e9;
  rep(bit, 0, (1 << n)) {
    int cnt = 0;
    vector<int> member;
    rep(i, 0, n) if(bit & (1 << i)) {
      cnt++;
      member.push_back(i);
    }

    if(cnt != 9) continue;
    int sum = 0;
    fore(z, member) sum += a[z];

    rep(i, 0, m) {
      int contain = 0;
      fore(z, member) if(combo_idol[i].count(z) != 0) contain++;
      if(contain >= 3) sum += b[i];
    }

    ans = max(ans, sum);
    //cout << sum << endl;
  }

  cout << ans << "\n";
  return 0;
} 