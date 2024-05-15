#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  char x, s; cin >> x;
  while(cin >> s) if(x != s) cout << s;
  cout << "\n";
}