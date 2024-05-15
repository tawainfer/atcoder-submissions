#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> ans(200009, 0);
  ans[1] = 1;

  int pos, cnt, last;
  for(int i = 2; i <= n; i++) {
    if(ans[i] == 0) {
      pos = i;
      cnt = 2;
      last = i;

      do {
        ans[pos] = cnt;
        pos += i;
        if(pos == last * 2) {
          cnt++;
          last = pos;
        }
      } while(pos <= n);
    }
  }

  for(int i = 1; i <= n; i++) cout << ans[i] << " ";
  return 0;
}