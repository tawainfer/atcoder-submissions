#include<bits/stdc++.h>
using namespace std;
int main() {
  long long n, ans = 0; cin >> n;
  long long l[n];
  for(int i = 0; i < n; i++) cin >> l[i];
  sort(l, l + n);
  for(int i = 0; i < n; i++) for(int j = 0; j < i; j++) for(int k = 0; k < j; k++) if(l[k] + l[j] > l[i] && l[i] != l[j] && l[j] != l[k]) ans++;
  cout << ans;
}