//Print Name N times using recursion
// #include <iostream>
// using namespace std;

// void f(int i, int N) {
// 	if (i > N) return;
// 	cout << "Saksham\n";
// 	f(i + 1, N);
// }

// int main() {
// 	int N; cin >> N;
// 	f(1, N);
// 	return 0;
// }



//Print (1 -> N)
/*#include <iostream>
using namespace std;

void f(int i, int N) {
	if (i > N) return;
	cout << i << endl;
	f(i + 1, N);
}

int main() {
	int N;
	cin >> N;
	f(1, N);
	return 0;
}*/



//Print from (N -> 1)
/*#include <iostream>
using namespace std;

void f(int i, int N) {
	if (i < 1) return;
	cout << i << endl;
	f(i - 1, N);
}

int main() {
	int N;
	cin >> N;
	f(N, N);
	return 0;
}*/



//Print from 1 -> N. (Backtracking)
/*#include <iostream>
using namespace std;

void f(int i, int N) {
	if (i < 1) return;
	f(i - 1, N);
	cout << i << endl;
}

int main() {
	int N;
	cin >> N;
	f(N, N);
	return 0;
}*/



//Print from N -> 1. (Backtracking)
#include <iostream>
using namespace std;

void f(int i, int N) {
	if (i > N) return;
	f(i + 1, N);
	cout << i << endl;
}

int main() {
	int N;
	cin >> N;
	f(1, N);
	return 0;
}