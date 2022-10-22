//Multiple Recursion Calls

#include <iostream>
using namespace std;

//Fibonacci Series
// int fib(int N) {
// 	if (N == 0) return 0;
// 	else if (N == 1) return 1;
// 	return fib(N - 1) + fib(N - 2);
// }
int fib(int N) {
	if (N <= 1) return N;
	int last = fib(N - 1);
	int slast = fib(N - 2);
	return last + slast;
}
int main() {
	int N;
	// cin >> N;
	cout << fib(9);
	return 0;
}