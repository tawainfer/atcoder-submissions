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
  vector<pair<char, int>> ps, pt;

  int cnt = 0;
  rep(i, 0, s.size()) {
    if(cnt == 0) cnt++;
    else {
      if(s[i] == s[i - 1]) cnt++;
      else {
        ps.push_back(make_pair(s[i - 1], cnt));
        cnt = 1;
      }
    }
  }
  ps.push_back(make_pair(s.back(), cnt));

  cnt = 0;
  rep(i, 0, t.size()) {
    if(cnt == 0) cnt++;
    else {
      if(t[i] == t[i - 1]) cnt++;
      else {
        pt.push_back(make_pair(t[i - 1], cnt));
        cnt = 1;
      }
    }
  }
  pt.push_back(make_pair(t.back(), cnt));

  //fore(z, ps) cout << z.first << " " << z.second << endl;
  //fore(z, pt) cout << z.first << " " << z.second << endl;
  //cout << ps.size() << " " << pt.size();

  if(ps.size() != pt.size()) {
    cout << "No";
    return 0;
  }

  rep(i, 0, ps.size()) {
    if(ps[i].first == pt[i].first && ps[i].second <= pt[i].second) {
      if(ps[i].second == 1 && pt[i].second != 1) {
        cout << "No";
        return 0;
      }
    } else {
      cout << "No";
      return 0;
    }
  }

  cout << "Yes";
  return 0;
}