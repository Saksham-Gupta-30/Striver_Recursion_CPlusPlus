#include <bits/stdc++.h>
using namespace std;

//Reverse An Array
// void reverse(int l, int r, int A[]) {
// 	if (l >= r) return;
// 	swap(A[l], A[r]);
// 	reverse(l + 1, r - 1, A);
// }
// int main () {
// 	int N;
// 	cin >> N;
// 	int A[N];
// 	for (int i = 0; i < N; i++) cin >> A[i];
// 	reverse(0, N - 1, A);
// 	for (int i = 0; i < N; i++) cout << A[i] << " ";
// }

// void reverse(int i, int N, int A[]) {
// 	if (i >= N / 2) return;
// 	swap(A[i], A[N - i - 1]);
// 	reverse(i + 1, N, A);
// }
// int main() {
// 	int N; cin >> N;
// 	int A[N];
// 	for (int i = 0; i < N; i++) cin >> A[i];
// 	reverse(0, N, A);
// 	for (int i = 0; i < N; i++) cout << A[i] << " ";
// }



//Palindrome check
bool palCheck(int l, int r, string S) {
	if (l >= r) return true;
	if (S[l] != S[r]) return false;
	return palCheck(l + 1, r - 1, S);
}
int main() {
	string S;
	// cin >> S;
	if (palCheck(0, S.size() - 1, "racecar")) cout << "True";
	else cout << "False";
}