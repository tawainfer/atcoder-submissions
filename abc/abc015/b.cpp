// https://atcoder.jp/contests/abc015/submissions/30782202

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, cnt = 0;
  double sum = 0;
  cin >> n;

  while(cin >> n) {
    sum += n;
    if(n != 0) cnt++;
  }

  cout << ceil(sum / cnt) << "\n";
}
