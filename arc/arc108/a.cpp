// https://atcoder.jp/contests/arc108/submissions/30377609

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long s, p; cin >> s >> p;
  for(long long n = 1; n <= 1000000; n++) {
    long long m = s - n;
    if(s - n <= 0) continue;

    if(n * m == p) {
      cout << "Yes";
      return 0;
    }
  }
  cout << "No";
}
