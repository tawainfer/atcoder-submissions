// https://atcoder.jp/contests/abc082/submissions/32650958

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

  int n;
  cin >> n;

  map<int, int> cnt;
  int a;
  while(cin >> a) {
    if(!cnt.count(a) == 0) cnt[a]++;
    else cnt[a] = 1;
  }

  int ans = 0;
  fore(z, cnt) {
    int num = z.first;
    int cn = z.second;

    if(cn < num) ans += cn;
    if(cn > num) ans += cn - num;
  }

  cout << ans;
  return 0;
}
