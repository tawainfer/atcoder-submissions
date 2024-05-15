#include <bits/stdc++.h>
using namespace std;

class GraphDFS {
public:
  // 引数なしで呼び出した場合、未初期化でインスタンスを作成
  GraphDFS() {}

  // 引数ありで呼び出した場合、初期化してインスタンスを作成
  GraphDFS(int n, bool d) {
    init(n, d);
  }

  // n頂点でグラフを初期化する
  // dがtrueなら有向、falseなら無向グラフとして管理する
  void init(int n, bool d) {
    directed = d;
    graph.assign(n + 1, set<int>());
  }

  // グラフに辺を追加
  void add(int u, int v) {
    graph[u].insert(v);
    if(!directed) graph[v].insert(u);  // 無向グラフであれば逆辺を加える
  }

  // 頂点xから行ける頂点を探索する
  set<int> search(int x) {
    // 頂点xを探索した事がある場合は記録されている結果を返す
    if(seen[x].find(x) != seen[x].end()) return seen[x];

    seen[x].insert(x);
    stack<int> st;
    st.push(x);

    while(!st.empty()) {
      int cp = st.top();
      st.pop();

      for(int ep : graph[cp]) {
        if(seen[x].find(ep) == seen[x].end()) {
          seen[x].insert(ep);
          st.push(ep);
        }
      }
    }

    return seen[x];
  }

  // 頂点xから頂点yに到達出来るか判定する
  bool reach(int x, int y) {
    if(seen[x].find(x) == seen[x].end()) search(x); // 頂点xから探索した事が無ければ探索する
    return (seen[x].find(y) != seen[x].end() ? true : false);
  }

private:
  bool directed;
  vector<set<int>> graph;
  map<int, set<int>> seen;
};

int main() {
  int n, m;
  cin >> n >> m;

  GraphDFS g(n, false);
  int a, b;
  while(cin >> a >> b) g.add(a, b);

  for(int i = 2; i <= n; i++) {
    if(!g.reach(1, i)) {
      cout << " The graph is not connected.";
      return 0;
    }
  }

  cout << " The graph is connected.";
  return 0;
}