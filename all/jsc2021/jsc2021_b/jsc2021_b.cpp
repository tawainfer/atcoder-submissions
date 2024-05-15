#include<bits/stdc++.h>
using namespace std;
int inf = 100000;
int main() {
  int n, m; cin >> n >> m;
  int a[n+m];
  for(int i = 0; i < n + m; i++) cin >> a[i];
  sort(a, a+n+m);
  for(int i = 0; i < n + m; i++) if(a[i]==a[i+1]){a[i]=inf; a[i+1]=inf;}
  for(int i=0; i<n+m; i++) if(a[i] <= 1000) cout << a[i] << " ";
}