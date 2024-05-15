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

  vector<ll> a(n);
  fore(z, a) cin >> z;
  sort(all(a));

  ll b;
  cin >> b;
  
  while(cin >> b) {
    if(lower_bound(all(a), b) == a.begin()) {
      cout << abs(a.front() - b);
    } else if(lower_bound(all(a), b) == a.end()) {
      cout << abs(a.back() - b);
    } else {
      ll right = distance(a.begin(), lower_bound(all(a), b));
      ll left = right - 1;

      cout << min(abs(a[left] - b), abs(a[right] - b));
    }
    cout << endl;
  }

  return 0;
}