//Subsequence -> a contigous/non-contigous sequence, which follows the order
// *[3, 1, 2]
// ?follows order of above -> [3], [1], [2], [3, 1], [1, 2], [3, 1, 2]
// !follows order of above -> [3, 2], [1, 2, 3]

#include <bits/stdc++.h>
using namespace std;

void printF(int index, vector<int> ds, int arr[], int n) {
	if (index == n) {
		for (auto it: ds) cout << it << " ";
		if (ds.size() == 0) cout << "{}";
		cout << "\n";
		return;
	}
	//take or pick the particular index into the subsequence
	ds.push_back(arr[index]);
	printF(index + 1, ds, arr, n);
	ds.pop_back();

	//not pick or not take condition, this element is not added to your subsequence
	printF(index + 1, ds, arr, n);
}

int main() {
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	vector<int> ds;
	printF(0, ds, arr, n);
	return 0;
}