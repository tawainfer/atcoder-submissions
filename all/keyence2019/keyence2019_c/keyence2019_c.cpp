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

  ll n;
  cin >> n;

  ll ans = 0;
  ll suma = 0, sumb = 0;
  deque<ll> a(n), b(n), diff;
  fore(z, a) {
    cin >> z;
    suma += z;
  }
  fore(z, b) {
    cin >> z;
    sumb += z;
  }
  rep(i, 0, n) if(a[i] - b[i] != 0) diff.push_back(a[i] - b[i]);

  if(suma < sumb) {
    cout << -1;
    return 0;
  }

  sort(all(diff));
  //reverse(diff.begin() + distance(diff.begin(), lower_bound(all(diff), 0)), diff.end());

  bool newl = true, newr = true;
  while(!(lower_bound(all(diff), 0) == diff.begin())) {
    ll l = abs(diff.front());
    ll r = abs(diff.back());

    if(l <= r) {
      diff.front() = 0;
      diff.back() -= l;
    } else {
      diff.front() += r;
      diff.back() = 0;
    }

    if(newl) {
      ans++;
      newl = false;
    }
    if(newr) {
      ans++;
      newr = false;
    }

    if(diff.front() == 0) {
      diff.pop_front();
      newl = true;
    }
    if(diff.back() == 0) {
      diff.pop_back();
      newr = true;
    }
  }
  //if(!newr) ans++;

  cout << ans;
  return 0;
}