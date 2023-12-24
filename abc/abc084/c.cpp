// https://atcoder.jp/contests/abc084/submissions/48811864

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> c(n, 0), s(n, 0), f(n, 0);
  for(int i = 1; i < n; i++) {
    cin >> c[i] >> s[i] >> f[i];
  }

  for(int i = 0; i < n - 1; i++) {
    int cp = i;
    int time = 0;

    do {
      if(time < s[cp + 1]) {
        time = s[cp + 1];
      }
      
      while((time - s[cp + 1]) % f[cp + 1] != 0) {
        time++;
      }

      time += c[cp + 1];
      cp++;
    } while(cp < n - 1);

    cout << time << endl;
  }

  cout << 0 << endl;
}
