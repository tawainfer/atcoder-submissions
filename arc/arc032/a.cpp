// https://atcoder.jp/contests/arc032/submissions/30787202

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fore(i, a) for(auto& i : a)
#define fixed fixed << setprecision(20)
#define ll long long
#define rep(i, x) for(int i = 0; i < (int)(x); i++)
#define reps(i, x) for(int i = 1; i <= (int)(x); i++)
#define rrep(i, x) for(int i = ((int)(x)-1); i >= 0; i--)
#define rreps(i, x) for(int i = ((int)(x)); i > 0; i--)
#define y0 y5380520
#define y1 y5380520
using namespace std;

bool isPrimeNumber(long long judge_number) {
  if(judge_number == 1) return false;
  for(long long i = 2; i * i <= judge_number; i++) {
    if(judge_number % i == 0) return false;
  }
  return true;
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  double n; cin >> n;
  cout << (isPrimeNumber(n / 2 * (1 + n)) ? "WANWAN\n" : "BOWWOW\n");
}
