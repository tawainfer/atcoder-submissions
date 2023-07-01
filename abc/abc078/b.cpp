// https://atcoder.jp/contests/abc078/submissions/27953304

#include <bits/stdc++.h>
using namespace std;
int main() {
  int x, y, z, sum = 0, count = 0; cin >> x >> y >> z;
  for(int i = 0; sum < x; i++) {
    if(i % 2 == 0) {
      if(sum + z <= x) {
        sum += z;
      }
      else break;
    } else {
      if(sum + y + z <= x) {
        sum += y;
                count++;
      }
      else break;
    }
  }
  cout << count;
}
