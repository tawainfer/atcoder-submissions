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

bool desc_asc(pair<int, int>& left, pair<int, int>& right) {
  if(left.first == right.first) {
    return left.second < right.second;
  } else {
    return right.first < left.first;
  }
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, x, y, z;
  cin >> n >> x >> y >> z;

  vector<pair<int, int>> math, eng, sum;
  int a;
  reps(i, 1, n) {
    cin >> a;
    math.push_back(make_pair(a, i));
  }
  int b;
  reps(i, 1, n) {
    cin >> b;
    eng.push_back(make_pair(b, i));
  }
  rep(i, 0, n) {
    sum.push_back(make_pair(math[i].first + eng[i].first, i + 1));
  }

  sort(all(math), desc_asc);
  sort(all(eng), desc_asc);
  sort(all(sum), desc_asc);

  set<int> g;
  rep(i, 0, x) g.insert(math[i].second);

  int j = 0;
  while(y > 0) {
    if(g.count(eng[j].second) == 0) {
      y--;
      g.insert(eng[j].second);
    }
    j++;
  }

  int k = 0;
  while(z > 0) {
    if(g.count(sum[k].second) == 0) {
      z--;
      g.insert(sum[k].second);
    }
    k++;
  }

  fore(z, g) cout << z << endl;
  return 0;
}