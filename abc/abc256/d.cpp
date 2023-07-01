// https://atcoder.jp/contests/abc256/submissions/32570747

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
  int l, r;

  vector<int> kaisa(200009, 0);

  while(cin >> l >> r) {
    kaisa[l]++;
    kaisa[r]--;
  }

  vector<int> ruiseki(200009, 0);
  reps(i, 1, 200009) {
    if(i == 1) {
      ruiseki[i] = kaisa[i];
    } else {
      ruiseki[i] = ruiseki[i - 1] + kaisa[i];
    }
  }

  //int ans = 0;
  bool was0 = true;
  int st, en;
  reps(i, 1, 200009) {
    if(ruiseki[i] != 0 && was0) {
      st = i;
      was0 = false;
    }
    if(ruiseki[i] == 0 && !was0) {
      en = i;
      cout << st << " " << en << endl;
      was0 = true;
    }
  }

  return 0;
} 
