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

  string oct;
  cin >> oct;

  int k;
  cin >> k;

  while(k--) {
    ll n = 0;
    reverse(all(oct));

    rep(i, 0, oct.size()) {
      ll x = 1;
      rep(j, 0, i) x *= 8;
      n += (ll)(oct[i] - 48) * x;
    }

    string nine = "";
    while(n >= 9) {
      nine += (char)(n % 9 + 48);
      n /= 9;
    }
    if(n != 0) nine += (char)(n % 9 + 48);
    if(n == 0 && nine == "") nine += '0';
    reverse(all(nine));

    fore(z, nine) if(z == '8') z = '5';
    oct = nine;
  }

  cout << oct;
  return 0;
}