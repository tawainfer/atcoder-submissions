#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  char a;
  int b = 0;
  while(cin >> a) if(a == '1') b++;
  cout << b;
}