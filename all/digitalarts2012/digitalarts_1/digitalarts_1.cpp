#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto &i : a)
#define ll long long
#define nextp next_permutation
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i >= b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i >= b; i -= c)
#define ull unsigned ll
template<class T> bool chmin(T &a, T &b) { return a > b ? (a = b, 1) : 0; }
template<class T> bool chmax(T &a, T &b) { return a < b ? (a = b, 1) : 0; }
template<class T> void lower(T &a) { a = numeric_limits<T>::min(); }
template<class T> void upper(T &a) { a = numeric_limits<T>::max(); }

/*

  @tawainfer

  2021-09-04 Gray
  2022-03-19 Brown
  2022-08-27 Green

  ξ(･_･)ξ I'll do my best! ξ(･_･)ξ

*/

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  string s;
  getline(cin, s);
  s += " ";

  int n;
  cin >> n;

  vector<string> ng(n);
  fore(z, ng) cin >> z;

  vector<string> str;
  string x = "";
  fore(z, s) {
    if(z != ' ') x += z;
    else {
      str.push_back(x);
      x = "";
    }
  }

  vector<string> ans;
  fore(z, str) {
    bool j = true;

    fore(zz, ng) {
      string a = zz, b = z;
      if(a.size() != b.size()) continue;

      rep(i, 0, (int)a.size()) {
        if(a[i] == '*');
        else if(a[i] != b[i]) break;
        if(i == (int)a.size() - 1) j = false;
      }

      if(!j) break;
    }

    string x = "";
    fore(zz, z) x += (j ? zz : '*');
    ans.push_back(x);
  }

  rep(i, 0, ans.size()) cout << ans[i] << (i == ans.size() - 1 ? "\n" : " ");
  return 0;
}