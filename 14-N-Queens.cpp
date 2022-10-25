#include<bits/stdc++.h>
using namespace std;

void NQueens(int col, vector<vector<string>>& ans, vector<string>& board, int n);
bool isSafe(int row, int col, int n, vector<string>& board);

int main() {
  int n; cin >> n;
  while (n > 9) {
    cout << "Should be less than 9" << endl;
    cin >> n;
  }

  vector<string> board(n);
  vector<vector<string>> ans;
  string s(n, '.');
  for (int i = 0; i < n; i++) board[i] = s;

  NQueens(0, ans, board, n);

  cout << "[";
    for (int i = 0; i < ans.size(); i++) {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << "\"" << ans[i][j] << "\"";
            if (j != ans[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i != ans.size() - 1) cout << ",";
    }
  cout << "]";

  return 0;
}

bool isSafe(int row, int col, int n, vector<string>& board) {
  int dupRow = row;
  int dupCol = col;

  while (col >= 0 && row >= 0) {
    if (board[row][col] == 'Q') return false;
    row--;
    col--;
  }

  row = dupRow;
  col = dupCol;

  while (col >= 0) {
    if (board[row][col] == 'Q') return false;
    col--;
  }

  row = dupRow;
  col = dupCol;

  while (col >= 0 && row < n) {
    if (board[row][col] == 'Q') return false;
    col--;
    row++;
  }

  return true;
}

void NQueens(int col, vector<vector<string>>& ans, vector<string>& board, int n) {
  if (col == n) {
    ans.push_back(board);
    return;
  }

  for (int row = 0; row < n; row++) {
    if (isSafe(row, col, n, board)) {
      board[row][col] = 'Q';
      NQueens(col + 1, ans, board, n);
      board[row][col] = '.';
    }
  }
}