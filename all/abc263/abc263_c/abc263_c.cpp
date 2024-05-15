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

ll n, m;
set<vector<ll>> s;
vector<ll> v;

void dfs(vector<ll> x) {
  if((ll)x.size() == n) {
    s.insert(x);
    return;
  }

  ll a = x.back();
  reps(k, a + 1, m) {
    x.push_back(k);
    dfs(x);
    x.pop_back();
  }
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cin >> n >> m;

  reps(i, 1, m) {
    v.push_back(i);
    dfs(v);
    v.pop_back();
  }

  fore(z, s) {
    fore(zz, z) cout << zz << " ";
    cout << "\n";
  }
  return 0;
}