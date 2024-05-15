#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int a, n; cin >> n;
  vector<int> ppl(1000000, 0);
  while(cin >> a) ppl[a]++;
  for(int i = 1; i <= n; i++) cout << ppl[i] << "\n";
}