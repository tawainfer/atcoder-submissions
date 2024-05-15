#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  char a, b, c, d; cin >> a >> b >> c >> d;
  if((a == b && b == c) || (b == c && c == d)) cout << "Yes";
  else cout << "No";
}