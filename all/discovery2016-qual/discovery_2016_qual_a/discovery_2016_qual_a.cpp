#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int w; cin >> w;
  string s = "DiscoPresentsDiscoveryChannelProgrammingContest2016";
  for(int i = 0; i < 51; i++) {
    if(i != 0 && i % w == 0) cout << endl;
    cout << s[i];
  }
  cout << endl;
}