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

  ll x, a, d, n;
  cin >> x >> a >> d >> n;
  
  if(d < 0) {
    a = a + d * (n - 1);
    d = -d;
  }

  ll first = a;
  ll last = (d != 0 ? (n - 1) * d + a : a);
  
  if(first > last) {
    ll xx = first;
    first = last;
    last = xx;
  }
  
  if(first < 0) {
    ll k = -first;
    x += k;
    a += k;
    first += k;
    last += k;
  }
  if(first > 0) {
    ll k = first;
    x -= k;
    a -= k;
    first -= k;
    last -= k;
  }
  //cout << first << " " << last << endl;

  if(first == x || last == x) {
    cout << 0;
  } else if(first < x && x < last) {
    ll mod = (x + a) % d;
    ll mod2 = d - mod;
    cout << min(mod, mod2);
    //cout <<endl << mod << " " << mod2;
  } else {
    cout << min(abs(first - x), abs(last - x));
    //cout << endl << first << " " << last;
  }
}