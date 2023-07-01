// https://atcoder.jp/contests/abc081/submissions/32635764

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

  int n, k;
  cin >> n >> k;

  set<int> s;
  vector<pair<int, int>> a(200001);
  reps(i, 0, 200000) {
    a[i] = make_pair(0, i);
  }

  int x;
  while(cin >> x) {
    a[x].first++;
    s.insert(x);
  }
  sort(all(a));

  int kind = s.size();
  if(kind <= k) {
    cout << 0;
    return 0;
  }

  int ans = 0;
  reps(i, 0, 200000) {
    if(a[i].first != 0) {
      ans += a[i].first;
      kind--;
    }

    if(kind <= k) break;
  }

  cout << ans;
  return 0;
}
