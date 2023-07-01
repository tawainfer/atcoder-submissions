// https://atcoder.jp/contests/abc181/submissions/33014848

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

  string s;
  cin >> s;
  vector<int> cntStr(10, 0);
  
  fore(z, s) {
    cntStr[z - 48]++;
  }

  vector<tuple<int, int, int>> v;
  int mul8 = 104;
  while(mul8 < 1000) {
    string ss = to_string(mul8);
    sort(all(ss));

    v.push_back(make_tuple(ss[0] - 48, ss[1] - 48, ss[2] - 48));
    mul8 += 8;
  }

  if(s.size() == 1) {
    if(s[0] == '8') cout << "Yes";
    else cout << "No";
  } else if(s.size() == 2) {
    int x = stoi(s);
    reverse(all(s));
    int y = stoi(s);

    if(x % 8 == 0 || y % 8 == 0) cout << "Yes";
    else cout << "No";
  } else {
    fore(z, v) {
      int a = get<0>(z);
      int b = get<1>(z);
      int c = get<2>(z);

      vector<int> cntMul(10, 0);
      cntMul[a]++;
      cntMul[b]++;
      cntMul[c]++;

      reps(i, 0, 9) {
        if(cntMul[i] != 0) {
          if(cntStr[i] < cntMul[i]) break;
        }

        if(i == 9) {
          cout << "Yes";
          return 0;
        }
      }
    }

    cout << "No";
  }

  return 0;
}
