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

  ll q;
  cin >> q;
  multiset<ll> ms;

  while(q--) {
    int n, x, c;
    cin >> n;

    if(n == 1) {
      cin >> x;
      ms.insert(x);
    }
    if(n == 2) {
      cin >> x >> c;
      while(c-- and ms.find(x) != ms.end()) {
        ms.erase(ms.find(x));
      }
    }
    if(n == 3) cout << *rbegin(ms) - *begin(ms) << "\n";
  }
}