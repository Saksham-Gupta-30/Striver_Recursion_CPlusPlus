#include<bits/stdc++.h>
using namespace std;

void subsetSum(int i, vector<int>& ds, vector<int>& arr, vector<vector<int>>& ans);

int main() {
  int n; cin >> n;
  vector<int> ds;
  vector<int> arr;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    arr.push_back(x);
  }
  vector<vector<int>> ans;

  subsetSum(0, ds, arr, ans);
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

void subsetSum(int i, vector<int>& ds, vector<int>& arr, vector<vector<int>>& ans) {
  ans.push_back(ds);

  for (int j = i; j < arr.size(); j++) {
    if (j > i && arr[j] == arr[j - 1]) continue;
    ds.push_back(arr[j]);
    subsetSum(j + 1, ds, arr, ans);
    ds.pop_back();
  }
}