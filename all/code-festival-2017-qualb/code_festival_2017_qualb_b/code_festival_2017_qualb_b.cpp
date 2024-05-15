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

  map<int, int> m;
  while(n--) {
    int x;
    cin >> x;

    if(m.count(x) == 0) m[x] = 1;
    else m[x]++;
  }

  int t;
  cin >> t;

  while(cin >> t) {
    if(m.count(t) == 0) {
      cout << "NO";
      return 0;
    }

    if(m[t] == 0) {
      cout << "NO";
      return 0;
    }

    m[t]--;
  }

  cout << "YES";
  return 0;
}