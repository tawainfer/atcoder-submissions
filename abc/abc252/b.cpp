// https://atcoder.jp/contests/abc252/submissions/31845370

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

  int n, k;
  cin >> n >> k;
  vector<int> a(n+1), b(k+1);
  vector<int> c;
  
  reps(i, 1, n) cin >> a[i];
  reps(i, 1, k) cin >> b[i];
  
  int ma = -1e9;
  int index = -1;
  reps(i, 1, n) {
    if(ma < a[i]) {
      c.clear();
      c.push_back(i);
      ma = a[i];
    } else if(ma == a[i]) {
      c.push_back(i);
      ma = a[i];
    }
  }
  
  fore(x, b) {
    fore(y, c) {
      if(x == y) {
        cout << "Yes";
        return 0;
      }
    }
  }
  
  cout << "No";
  return 0;
}
