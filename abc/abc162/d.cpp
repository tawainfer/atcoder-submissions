// https://atcoder.jp/contests/abc162/submissions/35601154

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  string s;
  cin >> n >> s;
  s = '!' + s;

  vector<int> r(n + 1, 0), g(n + 1, 0), b(n + 1, 0);
  for(int i = 1; i <= n; i++) {
    if(s[i] == 'R') r[i]++;
    if(s[i] == 'G') g[i]++;
    if(s[i] == 'B') b[i]++;
    r[i] += r[i - 1];
    g[i] += g[i - 1];
    b[i] += b[i - 1];
  }

  long long ans = 0;
  for(int i = 1; i <= n - 2; i++) {
    for(int j = i + 1; j <= n - 1; j++) {
      string x = "";
      x += s[i];
      x += s[j];
      sort(x.begin(), x.end());
      if(x[0] == x[1]) continue;

      int sum = 0;
      if(x[0] == 'B' && x[1] == 'G') {
        sum = r[n] - r[j];
        if((j + j - i) <= n)
          if(s[j + j - i] == 'R') sum--;
      }

      if(x[0] == 'G' && x[1] == 'R') {
        sum = b[n] - b[j];
        if((j + j - i) <= n)
          if(s[j + j - i] == 'B') sum--;
      }

      if(x[0] == 'B' && x[1] == 'R') {
        sum = g[n] - g[j];
        if((j + j - i) <= n)
          if(s[j + j - i] == 'G') sum--;
      }

      ans += sum;
      //cout << i << " " << j << " " << sum <<" "<< x << endl;
    }
  }

  cout << ans;
  return 0;
}
