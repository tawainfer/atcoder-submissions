#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n; cin >> n;
  vector<int> a(n);
  for(auto& z : a) cin >> z;
  
  sort(all(a));
  
  for(int i = 0; i <= 2001; i++) {
    int flag = 0;
    for(auto z : a) if(z == i) flag++;
    if(flag == 0) {
      cout << i;
      return 0;
    }
  }
}