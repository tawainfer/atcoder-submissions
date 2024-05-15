#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<string> s(k);
  for (int i = 0; i < k; i++) cin >> s[i];
  sort(s.begin(), s.end());
  for (auto &z : s) cout << z << endl;
}