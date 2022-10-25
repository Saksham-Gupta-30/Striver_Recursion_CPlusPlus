#include<bits/stdc++.h>
using namespace std;

bool isSafe(int node, vector<int>& color, bool graph[101][101], int N, int col);
bool solve(int node, int M, int N, vector<int>& color, bool graph[101][101]);

int main() {
  int N, E;
  cin >> N >> E;

  // UNDIRECTED GRAPH
  bool graph[101][101];
  for (int i = 0; i < E; i++) {
    int u, v;
    cin >> u >> v;
    graph[u][v] = 1;
    graph[v][u] = 1;
  }

  int M; cin >> M;

  vector<int> color(N, 0);
  if (solve(0, M, N, color, graph) == true) cout << "true";
  else cout << "false";

  return 0;
}

bool isSafe(int node, vector<int>& color, bool graph[101][101], int N, int col) {
  for (int i = 1; i < N; i++) {
    if (i != node && graph[i][node] == 1 && color[i] == col) return false;
  }
  return true;
}

bool solve(int node, int M, int N, vector<int>& color, bool graph[101][101]) {
  if (node == N) {
    return true;
  }

  for (int i = 1; i <= M; i++) {
    color[node] = i;
    if (isSafe(node + 1, color, graph, N, i)) return true;
    color[node] = 0;
  }

  return false;
}