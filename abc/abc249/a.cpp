// https://atcoder.jp/contests/abc249/submissions/31184382

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
#define y0 y20210831 // Hello, World
#define y1 y20220320 // Brown
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int a, b, c, d, e, f, x;
  cin >> a >> b >> c >> d >> e >> f >> x;
  
  double sum1 = 0, sum2 = 0;
  
  ll cnt1 = 0;
  int i = 0;
  for(; cnt1 < x; i++) {
    if(i % 2 == 0) {
      if(cnt1 + a > x) break;
      sum1 += a * b;
      cnt1 += a;
    } else {
      cnt1 += c;
    }
  }
  
  if(cnt1 < x) sum1 += (x - cnt1) * b;
  
  ll cnt2 = 0;
  i = 0;
  for(; cnt2 < x; i++) {
    if(i % 2 == 0) {
      if(cnt2 + d > x) break;
      sum2 += d * e;
      cnt2 += d;
    } else {
      cnt2 += f;
    }
  }
  
  if(cnt2 < x) sum2 += (x - cnt2) * e;
  
  if(sum1 > sum2) cout << "Takahashi";
  else if(sum1 < sum2) cout << "Aoki";
  else cout << "Draw";
}
