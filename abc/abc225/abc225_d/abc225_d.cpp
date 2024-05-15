#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  vector<int> forward(100009, 0);
  vector<int> backward(100009, 0);

  int x, y;
  vector<int> ptn;

  while (cin >> q) {
    if (q == 1) {
      cin >> x >> y;
      forward[y] = x;
      backward[x] = y;
    }

    if (q == 2) {
      cin >> x >> y;
      forward[y] = 0;
      backward[x] = 0;
    }

    if (q == 3) {
      cin >> x;
      while (forward[x]) x = forward[x];
      ptn.clear();

      do {
        ptn.push_back(x);
        x = backward[x];
      } while (x);

      cout << ptn.size() << " ";
      for(auto &z : ptn) cout << z << " ";
      cout << endl;
    }
  }
}