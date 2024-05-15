#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;

  string s, t;
  cin >> s >> t;

  if(s == t) cout << n;
  else {
    int fin = 0;
    for(int i = 0; i < n; i++) {
      regex re("^" + s.substr(i));
      if(regex_search(t, re)) {
        fin = n - i;
        break;
      }
    }

    cout << 2 * n - fin;
  }

  return 0;
}