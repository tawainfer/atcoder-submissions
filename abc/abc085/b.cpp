// https://atcoder.jp/contests/abc085/submissions/26252637

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, count = 0;
  cin >> n;
  vector<int> d(n);
  for(int i = 0; i < n; i++) cin >> d.at(i);
  sort(d.begin(), d.end());
  reverse(d.begin(), d.end());
  for(int i = 0; i < n; i++) if(i == 0 || (i != 0 && (d.at(i - 1) != d.at(i)))) count++;
  cout << count;
}
