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
#define y0 y20210904 // Gray
#define y1 y20220319 // Brown
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s;
  cin >> s;
  ll n = s.size();
  ll ans = 0;

  rep(bit, 0, (1 << n)) {
    ll sum = 0;
      int start = 0;

    rep(i, 0, n) {
      bool flag = false;
      if(i == n - 1) flag = true;
      else if(bit & (1 << i)) flag = true;

      if(flag) {
        string a = s.substr(start, (i - start + 1));
        if(a == "") a = "0";
        sum += stoll(a);
        start = i + 1;
      }
    }

    ans += sum;
  }

  cout << ans / 2;
}