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

ll n, m, q;
vector<ll> a(59), b(59), c(59), d(59);
ll ans = 0;

void score(vector<ll>& ptn) {
  ll sum = 0;
  rep(i, q) if(ptn[b[i]-1] - ptn[a[i]-1] == c[i]) sum += d[i];
  ans = max(ans, sum);
}

void dfs(vector<ll>& ptn) {
  if(ptn.size() == n) {
    score(ptn);
    return;
  }

  int prev_last = (ptn.empty() ? 1 : ptn.back());
  for(int i = prev_last; i <= m; i++) {
      ptn.push_back(i);
      dfs(ptn);
      ptn.pop_back();
  }
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  
  cin >> n >> m >> q;
  rep(i, q) cin >> a[i] >> b[i] >> c[i] >> d[i];

  vector<ll> ptn;
  dfs(ptn);

  cout << ans;
}