// https://atcoder.jp/contests/abc027/submissions/33568131

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

  int sum = 0;
  vector<int> a(n);
  fore(z, a) {
    cin >> z;
    sum += z;
  }

  if(sum % n == 0) {
    int x = sum / n;
    int ans = 0;

    rep(i, 0, n - 1) {
      if(a[i] < x) {
        a[i + 1] -= (x - a[i]);
        a[i] = x;
        ans++;
      } else if(a[i] > x) {
        a[i + 1] += (a[i] - x);
        a[i] = x;
        ans++;
      }
    }

    cout << ans << "\n";
  } else {
    cout << "-1\n";
  }

  return 0;
}
