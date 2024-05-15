#include <bits/stdc++.h>
using namespace std;
int main() {
  int a[9];
  for(int i = 0; i < 9; i++) cin >> a[i];
  int n; cin >> n;
  while(cin >> n) for(int i = 0; i < 9; i++) if(a[i] == n) a[i] = 0;
  if((a[0] == 0 && a[1] == 0 && a[2] == 0) || (a[3] == 0 && a[4] == 0 && a[5] == 0) || (a[6] == 0 && a[7] == 0 && a[8] == 0) || (a[0] == 0 && a[3] == 0 && a[6] == 0) || (a[1] == 0 && a[4] == 0 && a[7] == 0) || (a[2] == 0 && a[5] == 0 && a[8] == 0) || (a[0] == 0 && a[4] == 0 && a[8] == 0) || (a[2] == 0 && a[4] == 0 && a[6] == 0)) cout << "Yes";
  else cout << "No";
}