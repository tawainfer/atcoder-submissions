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

  vector<int> a(n);
  rep(i, 0, n) cin >> a[i];

  int ans = 0;
  int pos = 0;
  while(1) {
    if(pos == n) break;
    int pos1 = pos;
    int pos2 = pos;
    while(pos1 < n - 1 && a[pos1] <= a[pos1 + 1]) pos1++;
    while(pos2 < n - 1 && a[pos2] >= a[pos2 + 1]) pos2++;
    int large = max(pos1, pos2);
    pos = large + 1;
    ans++;
  }

  cout << ans;
  return 0;
}