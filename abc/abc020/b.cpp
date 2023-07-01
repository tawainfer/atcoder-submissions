// https://atcoder.jp/contests/abc020/submissions/30766182

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string a, b; cin >> a >> b;
  string c = a + b;
  int n = stoi(c);
  cout << n * 2 << endl;
}
