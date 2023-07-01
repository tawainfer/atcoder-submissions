// https://atcoder.jp/contests/abc089/submissions/30493570

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  char c;
  while(cin >> c) if(c == 'Y') {
    cout << "Four";
    return 0;
  }
  cout << "Three";
}
