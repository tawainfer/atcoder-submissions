// https://atcoder.jp/contests/abc223/submissions/28041753

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    int n = size(s);
    string v[n];
    for (int i = 0; i < n; i++) v[i] = s.substr(i, n - i) + s.substr(0, i);
    cout << *min_element(v, v + n) << '\n';
    cout << *max_element(v, v + n) << '\n';
}
