// https://atcoder.jp/contests/abc261/submissions/33432684

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

  int l1, r1, l2, r2;
  cin >> l1 >> r1 >> l2 >> r2;
  vector<bool> red(101, false), blue(101, false);
  
  reps(i, l1, r1) red[i] = true;
  reps(i, l2, r2) blue[i] = true;
  
  ll ans = 0;
  reps(i, 0, 100) if(red[i] && blue[i]) ans++;
  if(ans != 0) cout << ans - 1;
  else cout << 0;
  return 0;
}
