// https://atcoder.jp/contests/arc022/submissions/29787709

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
   vector<bool> exist(3, false);
   for(auto z : s) {
    if(z == 'I' || z == 'i') exist[0] = true;
    if((z == 'C' || z == 'c') && exist[0]) exist[1] = true;
    if((z == 'T' || z == 't') && exist[0] && exist[1]) exist[2] = true;
   }
   if(exist[0] && exist[1] && exist[2]) cout << "YES" << endl;
   else cout << "NO" << endl;
}
