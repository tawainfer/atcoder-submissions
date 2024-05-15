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

  int n;
  cin >> n;

  vector<pair<int, int>> a(n + 1);
  a[0].first = -1;
  a[0].second = -1;

  reps(i, 1, n) {
    cin >> a[i].first;
    a[i].second = i;
    //cout << a[i].first << " " << a[i].second << endl;
  }
  sort(all(a));

  int right = n / 2 + 1;
  int left = n / 2;

  vector<int> ans(n + 1);
  ans[0] = -1;

  reps(i, 1, n) {
    
    if(i <= left) ans[a[i].second] = a[right].first;
    else ans[a[i].second] = a[left].first;
    //cout << index << " " << ans[index] << endl;
  }

  fore(z, ans) {
    if(z == -1) continue;
    cout << z << "\n";
  }
  return 0;
}