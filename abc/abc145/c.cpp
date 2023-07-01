// https://atcoder.jp/contests/abc145/submissions/31149286

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define nextp(v) next_permutation(all(v))
#define rep(i, x) for(int i = 0; i < (int)(x); i++)
#define reps(i, x) for(int i = 1; i <= (int)(x); i++)
#define rrep(i, x) for(int i = ((int)(x)-1); i >= 0; i--)
#define rreps(i, x) for(int i = ((int)(x)); i > 0; i--)
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  vector<int> fac = {0, 1, 2, 6, 24, 120, 720, 5040, 40320};

  int n;
  cin >> n;

  int X, Y;
  vector<int> x, y;
  while(cin >> X >> Y) {
    x.push_back(X);
    y.push_back(Y);
  }

  vector<double> dis;
  vector<int> index;
  rep(i, n) index.push_back(i);

  do {
    double d = 0;
    rep(i, n - 1) {
      int j = i + 1;

      d += sqrt(pow(x[index[i]] - x[index[j]], 2) + pow(y[index[i]] - y[index[j]], 2));
    }
    dis.push_back(d);
  } while(nextp(index));

  double sum = 0;
  fore(z, dis) sum += z;

  cout << fix(10) << sum / fac[n];
}
