#include<bits/stdc++.h>
using namespace std;

void combSum(int i, int target, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans);

int main() {
  int n; cin >> n;
  vector<int> ds;
  vector<vector<int>> ans;
  vector<int> arr;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    arr.push_back(x);
  }
  int target; cin >> target;

  sort(arr.begin(), arr.end());

  combSum(0, target, arr, ds, ans);

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

void combSum(int i, int target, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans) {
  if (target == 0) {
    ans.push_back(ds);
    return;
  }

  for (int j = i; j < arr.size(); j++) {
    if (j > i && arr[j] == arr[j - 1]) continue;
    if (arr[j] > target) break;

    ds.push_back(arr[j]);
    combSum(j + 1, target - arr[j], arr, ds, ans);
    ds.pop_back();
  }
}