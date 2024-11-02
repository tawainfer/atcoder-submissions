#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(4);
  for(auto &z : a) cin >> z;
  sort(a.begin(), a.end());

  int ans = 0;
  vector<int> ptn = {0, 1, 2, 3};
  do {
    int cnt = 0;
    if(a[ptn[0]] == a[ptn[1]]) cnt++;
    if(a[ptn[2]] == a[ptn[3]]) cnt++;
    ans = max(ans, cnt);
  } while(next_permutation(ptn.begin(), ptn.end()));

  cout << ans;
}