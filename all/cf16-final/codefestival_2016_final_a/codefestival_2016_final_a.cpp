#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i ++){
    for (int j = 1; j <= m; j ++){
      cin >> s;
      if (s == "snuke") cout << char(j - 1 + 'A') << i << endl;
    }
  }
}