#include <bits/stdc++.h>
using namespace std;
int main() {
  int A, B;
     cin >> A >> B;

    int ans = max({ A + B, A - B, A * B });

    cout << ans << endl;
}