#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, suma = 0, sumb = 0, sumc = 0, a; cin >> n;
for(int h = 0; h < 3; h++) {
  for(int i = 0; i < n; i++) {
    cin >> a;
    if(h == 0) suma += a;
    else if(h == 1) sumb += a;
    else sumc += a;
  }
}
   cout << suma * sumb * sumc << endl;
}