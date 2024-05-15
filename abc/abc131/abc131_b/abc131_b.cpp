#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n, l, choice = 1000000000000000, ans = 0; cin >> n >> l;
  vector<int> azi;
  for(int i = 1; i <= n; i++) {
    ans += l+i-1;
    if(abs(choice) > abs(l+i-1)) choice = l+i-1;
  }
  cout << ans - choice;
}