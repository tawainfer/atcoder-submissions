#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  int n, ans = 0; cin >> n; n--;
  string s;
  while(cin >> s && n--) {
    if(s == "TAKAHASHIKUN" || s == "Takahashikun" || s == "takahashikun") ans++;
  }
  cin >> s;
  s.erase(s.size()-1);
  if(s == "TAKAHASHIKUN" || s == "Takahashikun" || s == "takahashikun") ans++;
  cout << ans << endl;
}