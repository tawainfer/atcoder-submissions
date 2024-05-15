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

  int x, y;
  cin >> x >> y;

  vector<int> a(x), b(y);
  set<int> s;

  fore(z, a) {
    cin >> z;
    s.insert(z);
  }
  fore(z, b) {
    cin >> z;
    s.insert(z);
  }
  sort(all(a));
  sort(all(b));

  int sum = 0;
  fore(z, a) {
    if(binary_search(all(b), z)) sum++;
  }
  //cout << sum << " " << s.size() << endl;
  double ans = sum / (double)s.size();
  cout << fix(7) << ans << endl;
  return 0;
}