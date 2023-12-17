// https://atcoder.jp/contests/abc333/submissions/48542688

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  int s1 = (int)s[0] - 97;
  int s2 = (int)s[1] - 97;
  int t1 = (int)t[0] - 97;
  int t2 = (int)t[1] - 97;

  if(s1 > s2) swap(s1, s2);
  if(t1 > t2) swap(t1, t2);
  // printf("%d %d %d %d\n", s1, s2, t1, t2);

  if(s2 - s1 == t2 - t1 || s2 - s1 == 5 - (t2 - t1)) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}
