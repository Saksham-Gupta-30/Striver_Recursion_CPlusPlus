#include<bits/stdc++.h>
using namespace std;

void permute(int i, vector<int>& arr, vector<vector<int>>& ans);

int main() {
  int n; cin >> n;
  vector<int> arr;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    arr.push_back(x);
  }

  vector<vector<int>> ans;

  permute(0, arr, ans);

  cout << "[";
    for (int i = 0; i < ans.size(); i++) {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j];
            if (j != ans[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i != ans.size() - 1) cout << ",";
    }
  cout << "]";

  return 0;
}

void permute(int i, vector<int>& arr, vector<vector<int>>& ans) {
  if (i == arr.size()) {
    ans.push_back(arr);
    return;
  }

  for (int j = i; j < arr.size(); j++) {
    swap(arr[i], arr[j]);
    permute(i + 1, arr, ans);
    swap(arr[i], arr[j]);
  }
}