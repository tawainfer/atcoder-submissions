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

  ll x;
  cin >> x;

  for(ll i = 0; i <= 5400; i++) {
    for(ll j = 0; j <= 5400; j++) {
      ll a = i * i * i * i * i;
      ll b = j * j * j * j * j;

      ll y = a - b;
      if(x == y) {
        cout << i << " " << j;
        return 0;
      }
      
      b = -b;
      y = a - b;
      if(x == y) {
        cout << i << " " << -j;
        return 0;
      }
    }
  }

  cout << -1;
}