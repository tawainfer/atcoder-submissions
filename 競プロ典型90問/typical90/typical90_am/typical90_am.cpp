#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<ll>> tree;
vector<ll> subtree_size, dist_sum;

void dfs1(ll node, ll parent) {
  subtree_size[node] = 1;
  for (ll neighbor : tree[node]) {
    if (neighbor == parent) continue;
    dfs1(neighbor, node);
    subtree_size[node] += subtree_size[neighbor];
    dist_sum[node] += dist_sum[neighbor] + subtree_size[neighbor];
  }
}

void dfs2(ll node, ll parent, ll n) {
  for (ll neighbor : tree[node]) {
    if (neighbor == parent) continue;
    dist_sum[neighbor] = dist_sum[node] - subtree_size[neighbor] + (n - subtree_size[neighbor]);
    // dist_sum[neighbor] = (dist_sum[node] - (dist_sum[neighbor] + subtree_size[neighbor])) + (n - subtree_size[neighbor]) + dist_sum[neighbor];
    dfs2(neighbor, node, n);
  }
}

int main() {
  ll n;
  cin >> n;
  tree.resize(n + 1);
  subtree_size.resize(n + 1);
  dist_sum.resize(n + 1);

  for(ll _ = 0; _ < n - 1; _++) {
    ll a, b;
    cin >> a >> b;
    tree[a].push_back(b);
    tree[b].push_back(a);
  }

  dfs1(1, -1);
  dfs2(1, -1, n);

  ll ans = 0;
  for (ll i = 1; i <= n; i++) {
    ans += dist_sum[i];
  }
  ans /= 2;
  cout << ans;
}