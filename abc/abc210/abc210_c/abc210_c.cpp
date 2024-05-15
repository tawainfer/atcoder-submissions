#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define nextp(v) next_permutation(all(v))
#define rep(i, x) for(int i = 0; i < (int)(x); i++)
#define reps(i, x) for(int i = 1; i <= (int)(x); i++)
#define rrep(i, x) for(int i = ((int)(x)-1); i >= 0; i--)
#define rreps(i, x) for(int i = ((int)(x)); i > 0; i--)
#define y0 y20210904 // Gray
#define y1 y20220319 // Brown
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;
  vector<int> c(n);
  set<int> s;
  map<int, int> m;
  int kind;

  rep(i, n) {
    cin >> c[i];
    s.insert(c[i]);
    if(i == k - 1) kind = s.size();
  }
  fore(z, s) m[z] = 0;

  int ans = kind;
  rep(i, n) {
    if(i < k) m[c[i]]++;
    else {
      m[c[i-k]]--;
      if(m[c[i-k]] == 0) kind--;
      if(m[c[i]] == 0) kind++;
      m[c[i]]++;
    }

    ans = max(ans, kind);
  }

  cout << ans << "\n";
}