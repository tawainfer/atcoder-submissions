#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define nextp(v) next_permutation(all(v))
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i >= b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i >= b; i -= c)
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n;
  string s;
  cin >> n >> s;

  int child = 0, man = 0;
  vector<pair<int, int>> people;
  int w;
  rep(i, 0, n) {
    cin >> w;
    if(s[i] == '0') people.push_back(make_pair(w, 0));
    else {
      people.push_back(make_pair(w, 1));
      man++;
    }
  }
  sort(all(people));

  int ans = man;
  rep(i, 0, n) {
    int weight = people[i].first;
    int status = people[i].second;

    if(status == 0) {
      child++;
    } else {
      man--;
    }

    if(i != n - 1) {
      if(people[i + 1].first == people[i].first) continue;
    }
    ans = max(ans, man + child);
  }

  cout << ans;
  return 0;
}