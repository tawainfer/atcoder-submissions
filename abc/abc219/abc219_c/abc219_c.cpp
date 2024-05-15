#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef int ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string X;
  cin >> X;
  vector<int> pos(26);
  for(int i = 0; i < 26; ++i) { pos[X[i] - 'a'] = i; }
  int N;
  cin >> N;
  vector<string> S(N);
  for(auto& s : S) cin >> s;
  sort(begin(S), end(S), [&](const string& s, const string& t) {
    int len = min(size(s), size(t));
    for(int i = 0; i < len; ++i) {
      if(s[i] != t[i]) return pos[s[i] - 'a'] < pos[t[i] - 'a'];
    }
    return size(s) < size(t);
  });
  for(auto& s : S) cout << s << '\n';
}