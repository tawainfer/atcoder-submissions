// https://atcoder.jp/contests/abc240/submissions/32453194

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
  deque<pair<int, int>> d; // first => num, second => cnt

  int a;
  int sum = 0;
  while(cin >> a) {
    sum++;
    
    if(d.size() == 0) d.push_back(make_pair(a, 1));
    else {
      int lastNum = d.back().first;
      int lastCnt = d.back().second;

      if(lastNum == a) {
        d.back().second++;
        if(lastNum == d.back().second) {
          sum -= lastNum;
          d.pop_back();
        }
      } else {
        d.push_back(make_pair(a, 1));
      }
    }

    cout << sum << "\n";
  }
}
