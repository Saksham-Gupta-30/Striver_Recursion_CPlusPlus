#include<bits/stdc++.h>
using namespace std;

string getPermutation(int n, int k);

int main() {
  int n, k; cin >> n >> k;

  string str = getPermutation(n, k);
  cout << str;

  return 0;
}

string getPermutation(int n, int k) {
  vector<int> nums;
  int fact = 1;
  for (int i = 1; i < n; i++) {
    fact = fact * i;
    nums.push_back(i);
  }
  nums.push_back(n);

  string str = "";
  k = k - 1;
  while(true) {
    str = str + to_string(nums[k / fact]);
    nums.erase(nums.begin() + k / fact);
    if (nums.size() == 0) break;
    k = k % fact;
    fact = fact / nums.size();
  }

  return str;
}