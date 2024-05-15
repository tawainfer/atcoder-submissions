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

  ll n, w;
  cin >> n >> w;

  vector<ll> water(200009, 0);
  ll s, t, p;
  while(cin >> s >> t >> p) {
    water[s] += p;
    water[t] -= p;
  }

  vector<ll> ans(200009, 0);
  rep(i, 0, 200009) {
    if(i == 0) ans[0] = water[0];
    else ans[i] = ans[i - 1] + water[i];
  }

  fore(z, ans) {
    if(z > w) {
      cout << "No\n";
      return 0;
    }
  }

  cout << "Yes\n";
  return 0;
}