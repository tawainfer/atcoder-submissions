#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, v[4] = {0};
  while(cin >> n) v[n-1] += 1;
  sort(v, v + 4);
  if(v[0] == 1 && v[1] == 1 && v[2]== 2 && v[3] == 2) cout << "YES";
  else cout << "NO";
}