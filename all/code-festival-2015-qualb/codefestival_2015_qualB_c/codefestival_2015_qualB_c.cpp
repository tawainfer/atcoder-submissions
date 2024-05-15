#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m);
  for(auto& z : a) cin >> z;
  for(auto& z : b) cin >> z;
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  sort(b.begin(), b.end());
  reverse(b.begin(), b.end());

  if(n < m) {
    cout << "NO\n";
    return 0;
  } else {
	for(int i = 0, j = 0; i < m; i++, j++) {
      if((j == m) || (a[i] < b[j])) {
		cout << "NO\n";
        return 0;
      }
	}
  }
  cout << "YES\n";
}