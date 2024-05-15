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

  string s, t;
  cin >> s >> t;
  vector<int> name(123, 0), kit(123, 0);

  fore(z, s) name[int(z)]++;
  fore(z, t) kit[int(z)]++;

  int ans = -1e9;
  rep(i, 65, 91) {
    //cout << i << " " << name[i] << " " << kit[i] << endl;
    if(name[i] != 0 && kit[i] == 0) {
      cout << -1;
      return 0;
    }
    if(!(name[i] == 0 && kit[i] == 0)) {
      ans = max(ans, (name[i] + kit[i] - 1) / kit[i]);
    }
  }

  cout << ans;
  return 0;
}