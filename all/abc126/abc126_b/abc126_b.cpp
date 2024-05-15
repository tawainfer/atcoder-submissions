#include <bits/stdc++.h>
using namespace std;
int main() {
  char a, b, c, d; cin >> a >> b >> c >> d;
  int yymm = 0, mmyy = 0;
  if((c == '0' && 48 - d < 10 && d != '0') || (c == '1') && (d == '1' || d == '2')) yymm++;
  if((a == '0' && 48 - b < 10 && b != '0') || (a == '1') && (b == '1' || b == '2')) mmyy++;
  if(yymm == 1 && mmyy == 1) cout << "AMBIGUOUS";
  else if(yymm == 1) cout << "YYMM";
  else if(mmyy == 1) cout << "MMYY";
  else cout << "NA";
}