// https://atcoder.jp/contests/abc076/submissions/33388374

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

  string s, t;
  cin >> s >> t;
  vector<string> ans;

  int cnt = s.size() - t.size() + 1;
  rep(i, 0, cnt) {
    string str = s;
    bool b = true;

    rep(j, 0, t.size()) {
      if(s[i + j] == t[j] || s[i + j] == '?') str[i + j] = t[j];
      else b = false;
    }

    fore(z, str) {
      if(z == '?') z = 'a';
    }

    if(b) ans.push_back(str);
  }

  sort(all(ans));
  if(ans.empty()) cout << "UNRESTORABLE\n";
  else cout << ans.front() << "\n";
}
