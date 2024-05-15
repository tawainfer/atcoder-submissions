#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s; cin >> s;
  while(cin >> s) {
    sort(all(s));
    cout << (s == "ddeeinnow" ? "YES\n" : "NO\n");
  }
}