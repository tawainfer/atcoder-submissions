#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll n, k; cin >> n >> k;
  vector<ll> a(n);
  for(auto& z : a) cin >> z;

  for(int i = 0; i < n - k; i++) {
    cout << (a[i] < a[i + k] ? "Yes\n" : "No\n");
  }
}