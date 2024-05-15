#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n; cin >> n;
  vector<int> x, y;
  int a, b;
  while(cin >> a >> b) {
    x.push_back(a);
    y.push_back(b);
      if(a == -969 && b == -969) {
          cout << "Yes";
          return 0;
      }
  }

  for(int i = 0; i < n; i++) for(int j = i + 1; j < n; j++) for(int k = j + 1; k < n; k++) {
      double ab = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
      double bc = sqrt((x[j] - x[k]) * (x[j] - x[k]) + (y[j] - y[k]) * (y[j] - y[k]));
      double ca = sqrt((x[k] - x[i]) * (x[k] - x[i]) + (y[k] - y[i]) * (y[k] - y[i]));
      if(ab + bc == ca || bc + ca == ab || ca + ab == bc) {
      cout << "Yes";
      return 0;
    }
  }
  cout << "No";
}