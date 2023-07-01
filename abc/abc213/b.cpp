// https://atcoder.jp/contests/abc213/submissions/26748124

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, num; cin >> n;
    vector<pair<int,int>>v;
    for(int i = 1; i <= n; i++) {
      cin >> num;
      v.push_back({num, i});
    }
    sort(v.begin(),v.end());
    cout << v[n-2].second;
}
