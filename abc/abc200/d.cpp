// https://atcoder.jp/contests/abc200/submissions/34124937

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
  fore(z, a) cin >> z;

  vector<int> v[200];
  if(n > 8) n = 8;

  rep(bit, 1, (1 << n)) {
    int sum = 0;

    rep(i, 0, n) if(bit & (1 << i)) {
      sum += a[i];
      sum %= 200;
    }
    v[sum].push_back(bit);

    if(v[sum].size() == 2) {
      cout << "YeS" << endl;

      int cnt = 0;
      vector<int> x;

      rep(i, 0, n) if(v[sum].front() & (1 << i)) {
        cnt++;
        x.push_back(i + 1);
      }
      cout << cnt << " ";
      fore(z, x) cout << z << " ";
      cout << endl;

      cnt = 0;
      vector<int> y;

      rep(i, 0, n) if(v[sum].back() & (1 << i)) {
        cnt++;
        y.push_back(i + 1);
      }
      cout << cnt << " ";
      fore(z, y) cout << z << " ";
      cout << endl;
      return 0;
    }
  }

  cout << "nO" << endl;
  return 0;
}
