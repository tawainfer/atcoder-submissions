// https://atcoder.jp/contests/abc128/submissions/30563348

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<tuple<int, string, int>> p;
  set<string> st;
  for(int i = 0; i < n; i++) {
    int a;
    string b;
    cin >> b >> a;
    st.insert(b);
    p.emplace_back(a, b, i + 1);
  }
  sort(all(p));
  reverse(all(p));

  for(auto z : st) {
    for(int i = 0; i < n; i++) {
      if(get<1>(p[i]) == z) {
        cout << get<2>(p[i]) << "\n";
      }
    }
  }
}
