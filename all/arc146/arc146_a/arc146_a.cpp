#include <bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define uint unsigned int
#define ushort unsigned short
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto &i : a)
#define nextp(v) next_permutation(all(v))
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i >= b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i >= b; i -= c)
template<class T> bool chmax(T &a, T &b) { return a < b ? (a = b, 1) : 0; }
template<class T> bool chmin(T &a, T &b) { return a > b ? (a = b, 1) : 0; }
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  ll n;
  cin >> n;

  vector<ll> keta[8];

  vector<ll> a;
  string s;
  while(cin >> s) keta[(int)s.size()].push_back(stoll(s));
  rep(i, 1, 8) sort(all(keta[i]));

  vector<ll> ans;
  int cnt = 0;
  int i = 7;
  while(cnt < 3) {
    if(keta[i].empty()) i--;
    else {
      ans.push_back(keta[i].back());
      keta[i].pop_back();
      cnt++;
    }
  }

  vector<ll> ptn = {0, 1, 2};
  ll sum = -1e9;
  do {
    string t = "";
    t += to_string(ans[ptn[0]]);
    t += to_string(ans[ptn[1]]);
    t += to_string(ans[ptn[2]]);
// cout << t << endl;
    ll x = stoll(t);
    sum = max(sum, x);
  } while(nextp(ptn));

  cout << sum;
  return 0;
}