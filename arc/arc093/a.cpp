// https://atcoder.jp/contests/abc092/submissions/32670027

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
  int y = 0;
  vector<int> x(n);
  rep(i, 0, n) {
    cin >> x[i];
    sum += abs(y - x[i]);
    y = x[i];
  }
  sum += abs(y);

  rep(i, 0, n) {
    int a = 0, b = 0, c = 0;

    if(i != 0) a = x[i - 1];
    b = x[i];
    if(i != n - 1) c = x[i + 1];

    cout << sum - abs(a - b) - abs(b - c) + abs(a - c) << "\n";
  }

  return 0;
}
