#include<bits/stdc++.h>
using namespace std;

void permute(vector<int>& arr, vector<int>& ds, vector<vector<int>>& ans, vector<int>& freq);

int main() {
  int n; cin >> n;
  vector<int> arr;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    arr.push_back(x);
  }

  vector<vector<int>> ans;
  vector<int> ds;
  vector<int> freq(n, 0);

  permute(arr, ds, ans, freq);

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

void permute(vector<int>& arr, vector<int>& ds, vector<vector<int>>& ans, vector<int>& freq) {
  if (arr.size() == ds.size()) {
    ans.push_back(ds);
    return;
  }
  for (int i = 0; i < arr.size(); i++) {
    if (freq[i] == 0) {
      freq[i] = 1;
      ds.push_back(arr[i]);
      permute(arr, ds, ans, freq);
      freq[i] = 0;
      ds.pop_back();
    }
  }
}