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

  vector<char> ptn = {'a', 't', 'c', 'o', 'd', 'e', 'r'};
  vector<string> ptn2 = {"a", "t", "c", "o", "d", "e", "r"};

  int cnt = 0;
  rep(i, 0, 6) {
    int index = -1;
    rep(j, 0, 7) if(ptn[i] == s[j]) index = j;

    if(i != index) {
      int d = index - i;
      s.insert(i, ptn2[i]);
      s.erase(index + 1, 1);
      cnt += d;
    }
  }

  cout << cnt;
  return 0;
}