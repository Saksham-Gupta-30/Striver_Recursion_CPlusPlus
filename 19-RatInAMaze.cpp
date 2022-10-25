#include<bits/stdc++.h>
using namespace std;

void ratInAMaze(int i, int j, int n, vector<vector<int>>& maze, vector<string>& ans, string s, vector<vector<int>>& vis);

int main() {
  int n; cin >> n;
  vector<vector<int>> maze(n, vector<int> (n, 0));
  vector<vector<int>> vis(n, vector<int> (n, 0));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int x; cin >> x;
      maze[i][j] = x;
    }
  }

  vector<string> ans;
  string s = "";
  ratInAMaze(0, 0, n, maze, ans, s, vis);
  
  if (ans.size() == 0) cout << -1;
  else for (auto it: ans) cout << "\"" << it << "\"" << " ";

  return 0;
}

void ratInAMaze(int i, int j, int n, vector<vector<int>>& maze, vector<string>& ans, string s, vector<vector<int>>& vis) {
  if (i == n - 1 && j == n - 1) {
    ans.push_back(s);
    return;
  }

  if (i + 1 < n && !vis[i + 1][j] && maze[i + 1][j] == 1) {
    vis[i + 1][j] = 1;
    ratInAMaze(i + 1, j, n, maze, ans, s + 'D', vis);
    vis[i + 1][j] = 0;
  }

  if (j - 1 >= 0 && !vis[i][j - 1] && maze[i][j - 1] == 1) {
    vis[i][j - 1] = 1;
    ratInAMaze(i, j - 1, n, maze, ans, s + 'L', vis);
    vis[i][j - 1] = 0;
  }

  if (j + 1 < n && !vis[i][j + 1] && maze[i][j + 1] == 1) {
    vis[i][j + 1] = 1;
    ratInAMaze(i, j + 1, n, maze, ans, s + 'R', vis);
    vis[i][j + 1] = 0;
  }

  if (i - 1 >= 0 && !vis[i - 1][j] && maze[i - 1][j] == 1) {
    vis[i - 1][j] = 1;
    ratInAMaze(i - 1, j, n, maze, ans, s + 'U', vis);
    vis[i - 1][j] = 0;
  }
}