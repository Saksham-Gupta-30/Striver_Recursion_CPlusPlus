#include<bits/stdc++.h>
using namespace std;

void subsetSum(int i, int sum, vector<int>& arr, vector<int>& ans);

int main() {
  int n; cin >> n;
  vector<int> arr;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    arr.push_back(x);
  }
  vector<int> ans;

  subsetSum(0, 0, arr, ans);
  cout << "[";
  for (int j = 0; j < ans.size(); j++) {
    cout << ans[j];
    if (j != ans.size() - 1) cout << ",";
  }
  cout << "]";

  return 0;
}

void subsetSum(int i, int sum, vector<int>& arr, vector<int>& ans) {
  if (i == arr.size()) {
    ans.push_back(sum);
    return;
  }

  subsetSum(i + 1, sum + arr[i], arr, ans);

  subsetSum(i + 1, sum, arr, ans);
}