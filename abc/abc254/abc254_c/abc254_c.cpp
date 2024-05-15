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
  
  vector<int> a(n + 1);
  reps(i, 1, n) cin >> a[i];
  
  if(k == 1) {
    cout << "Yes";
    return 0;
  }
  
  rep(x, 0, k) {
    vector<int> v(0);
    rrepsv(i, n - x, 1, k) v.push_back(a[i]);
    sort(all(v));
    reverse(all(v));
    int index = 0;
    rrepsv(i, n - x, 1, k) {
      a[i] = v[index];
      index++;
    }
  }
  
  reps(i, 2, n) {
    if(a[i - 1] > a[i]) {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
}