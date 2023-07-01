// https://atcoder.jp/contests/abc275/submissions/36061587

#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto &i : a)
#define ll long long
#define nextp next_permutation
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i >= b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i >= b; i -= c)
#define ull unsigned ll
class UnionFind {
  public:
  UnionFind() = default;
  explicit UnionFind(size_t n) : m_parentsOrSize(n, -1) {}

  int root(int i) {
    if(m_parentsOrSize[i] < 0) return i;
    return (m_parentsOrSize[i] = root(m_parentsOrSize[i]));
  }

  void merge(int a, int b) {
    a = root(a);
    b = root(b);
    if(a != b) {
      if(-m_parentsOrSize[a] < -m_parentsOrSize[b]) swap(a, b);
      m_parentsOrSize[a] += m_parentsOrSize[b];
      m_parentsOrSize[b] = a;
    }
  }

  bool same(int a, int b) { return (root(a) == root(b)); }

  int size(int i) { return -m_parentsOrSize[root(i)]; }

  private:
  vector<int> m_parentsOrSize;
};
template<class T> bool chmin(T &a, T &b) { return a > b ? (a = b, 1) : 0; }
template<class T> bool chmax(T &a, T &b) { return a < b ? (a = b, 1) : 0; }
template<class T> void lower(T &a) { a = numeric_limits<T>::min(); }
template<class T> void upper(T &a) { a = numeric_limits<T>::max(); }
template<class T> vector<T> divisor_enumeration(T &a) {
  vector<T> v;
  for(T i = 1; i * i <= a; i++) {
    if(a % i != 0) continue;
    v.push_back(i);
    if(i != a / i) v.push_back(a / i);
  }

  sort(v.begin(), v.end());
  return v;
}
template<class T> vector<T> prime_factorization(T a) {
  vector<T> v;
  for(T i = 2; i * i <= a; i++) {
    while(a % i == 0) {
      a /= i;
      v.push_back(i);
    }
  }

  if(a >= 2) v.push_back(a);
  return v;
}
template<class T> vector<bool> eratosthenes(T &a) { // 2e8 + 9
  long long b = a;
  b = min(b, 200000009LL);
  int c = b;

  vector<bool> v(c + 1, true);
  v[0] = false;
  v[1] = false;
  for(int i = 2; i * i <= c; i++) {
    if(v[i]) {
      for(int j = 2; i * j <= c; j++) v[i * j] = false;
    }
  }

  return v;
}

/*

  @tawainfer

  2021-09-04 Gray
  2022-03-19 Brown
  2022-08-27 Green

  ξ(･_･)ξ I'll do my best! ξ(･_･)ξ

*/

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  char f[9][9];
  rep(i, 0, 9) rep(j, 0, 9) cin >> f[i][j];

  //int ans = 0;
  set<vector<pair<int, int>>> se;

  reps(dy, -8, 8) {
    reps(dx, -8, 8) {
      rep(y, 0, 9) {
        rep(x, 0, 9) {
          int yy = y + dy;
          int xx = x + dx;
          if(8 < yy || 8 < xx || yy < 0 || xx < 0 || dy == 0 || dx == 0 ||
             (dx != dy))
            break;

          if(f[y][x] == '#' && f[y][xx] == '#' && f[yy][x] == '#' &&
             f[yy][xx] == '#') {
            vector<pair<int, int>> v;
            v.push_back(make_pair(y, x));
            v.push_back(make_pair(y, xx));
            v.push_back(make_pair(yy, x));
            v.push_back(make_pair(yy, xx));
            sort(all(v));
            se.insert(v);
            //fore(z, v) cout << z.first << " " << z.second << " ";
            //cout << endl;
            //cout << y << ' ' << x << ' ' << yy << ' ' << xx << endl;
          }
        }
      }
    }
  }

  reps(disy, -8, 8) {
    reps(disx, -8, 8) {
      rep(y, 0, 9) {
        rep(x, 0, 9) {
          if(disx == 0 || disy == 0) continue;

          int ay = y, ax = x;
          int by = ay + disy, bx = ax + disx;
          int cy = ay + disx, cx = ax - disy;
          int dy = cy + disy, dx = cx + disx;

          if(!(0 <= ay && ay <= 8 && 0 <= ax && ax <= 8 && 0 <= by && by <= 8 &&
               0 <= bx && bx <= 8 && 0 <= cy && cy <= 8 && 0 <= cx && cx <= 8 &&
               0 <= dy && dy <= 8 && 0 <= dx && dx <= 8))
            continue;

          if(f[ay][ax] == '#' && f[by][bx] == '#' && f[cy][cx] == '#' &&
             f[dy][dx] == '#') {
            vector<pair<int, int>> v;
            v.push_back(make_pair(ay, ax));
            v.push_back(make_pair(by, bx));
            v.push_back(make_pair(cy, cx));
            v.push_back(make_pair(dy, dx));
            sort(all(v));
            se.insert(v);
            //fore(z, v) cout << z.first << "---" << z.second << " ";
            //cout << endl;
          }
        }
      }
    }
  }

  cout << se.size();
  return 0;
}
