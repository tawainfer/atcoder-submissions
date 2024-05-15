#include<bits/stdc++.h>
using namespace std;
int main(){
  int n; cin >> n;
  char s[n]; cin >> s;
  long long k = 0, ans = 0;
  for(int i = 1; i <= n; i++) {
    if(i > 0 && s[i] == s[i-1]) k++;
    else k = 0;
    ans += k;
  }
  cout << ans;
}