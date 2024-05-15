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

int n;
deque<int> base(4);
deque<int> l(10);
int ans = 1e9;

void comb(deque<int> v) {
  if(v.size() == n) {
    deque<int> bamboo[4];

    rep(i, 0, n) bamboo[v[i]].push_back(l[i]);
    rep(i, 1, 4) if(bamboo[i].empty()) return;

    int connect = 0;
    int cost = 0;

    rep(i, 1, 4) {
      int su = 0;
      fore(z, bamboo[i]) su += z;
      cost += abs(su - base[i]);
      connect += bamboo[i].size() - 1;
    }

    cost += connect * 10;
    ans = min(ans, cost);

    return;
  }

  rep(j, 0, 4) {
    v.push_back(j);
    comb(v);
    v.pop_back();
  }
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cin >> n;

  base[0] = -1e9;
  rep(i, 1, 4) cin >> base[i];
  sort(all(base));

  rep(i, 0, n) cin >> l[i];

  deque<int> v;
  comb(v);

  cout << ans;
  return 0;
}