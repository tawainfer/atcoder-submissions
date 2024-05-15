#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  vector<bool> x(10), y(10);
  int l, m = 6, n = 6;

  while(m--) {
    cin >> l;
    x[l] = true;
  }

  int b;
  cin >> b;

  while(n--) {
    cin >> l;
    y[l] = true;
  }

  int cnt = 0;
  for(int i = 0; i < 10; i++) if(x[i] && y[i]) cnt++;

  if(cnt == 6) n = 1;
  else if(cnt == 5) {
    if(!(x[b] && y[b]) && y[b] == true) n = 2;
    else n = 3;
  }
  else if(cnt == 4) n = 4;
  else if(cnt == 3) n = 5;
  else n = 0;
  cout << n << "\n";
}