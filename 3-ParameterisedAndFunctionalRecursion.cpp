//Sum of first N numbers
#include <iostream>
using namespace std;


//Parameterized Way
// void Sum(int i, int sum) {
// 	if (i < 1) {
// 		cout << sum;
// 		return;
// 	}
// 	Sum(i - 1, sum + i);
// }

// int main() {
// 	int N;
// 	cin >> N;
// 	Sum(N, 0);
// 	return 0;
// }



//Functional Way
// int Sum(int N) {
// 	if (N == 0) return 0;
// 	return N + Sum(N - 1);
// }

// int main() {
// 	int N;
// 	cin >> N;
// 	cout << Sum(N);
// }



//Factorial
int fact(int N) {
	if (N == 0) return 1;
	return N * fact(N - 1);
}

int main() {
	int N;
	cin >> N;
	cout << fact(N);
}