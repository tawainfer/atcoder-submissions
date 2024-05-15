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

  int n, l;
  cin >> n >> l;

  string s;
  vector<char> amida[l];

  rep(i, 0, l) {
    if(i == 0) getline(cin, s);
    getline(cin, s);
    rep(j, 0, 2 * n - 1) amida[i].push_back(s[j]);
  }

  getline(cin, s);
  int ans = -1;
  rep(i, 0, s.size()) if(s[i] == 'o') ans = i;

  repv(i, 0, 2 * n - 1, 2) {
    int pos = i;

    rep(j, 0, l) {
      if(pos == 0) {
        if(amida[j][pos + 1] == '-') pos += 2;
      } else if(pos == 2 * n) {
        if(amida[j][pos - 1] == '-') pos -= 2;
      } else {
        if(amida[j][pos + 1] == '-') pos += 2;
        else if(amida[j][pos - 1] == '-') pos -= 2;
      }
    }

    if(pos == ans) {
      cout << i / 2 + 1 << endl;
      return 0;
    }
  }
  cout << "error";
}