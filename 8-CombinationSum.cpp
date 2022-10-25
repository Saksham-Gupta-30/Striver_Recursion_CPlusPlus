// Given an array of distinct integers candidates and a 
// target integer target, return a list of all unique 
// combinations of candidates where the chosen numbers 
// sum to target. You may return the combinations in any 
// order.

// The same number may be chosen from candidates an 
// unlimited number of times. Two combinations are unique 
// if the frequency of at least one of the chosen numbers 
// is different.

// It is guaranteed that the number of unique combinations 
// that sum up to target is less than 150 combinations for 
// the given input.

// Input: candidates = [2,3,6,7], target = 7
// Output: [[2,2,3],[7]]
// Explanation:
// 2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
// 7 is a candidate, and 7 = 7.
// These are the only two combinations.

#include <bits/stdc++.h>
using namespace std;

void recursion(int ind, vector<int> &ds, int target, vector<int> &arr, vector<vector<int>> &ans) {
    if (ind == arr.size()) {
        if (target == 0) ans.push_back(ds);
        return;
    }
    if (arr[ind] <= target) {
        ds.push_back(arr[ind]);
        recursion(ind, ds, target - arr[ind], arr, ans);
        ds.pop_back();
    }
    recursion(ind + 1, ds, target, arr, ans);
}


int main() {
    int n; cin >> n;

    int target;
    vector<vector<int>> ans;
    vector<int> ds;
    vector<int> candidates;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        candidates.push_back(x);
    }

    cin >> target;

    recursion(0, ds, target, candidates, ans);

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