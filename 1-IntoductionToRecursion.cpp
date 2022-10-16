// Recursion -> When a function call its self
//				Until a specified condition is met

// Base case -> Condition on which function will return or terminate
// Stack Overflow/Stack Space -> Where all incomplete or not executed functions are stored

// Recursion Tree -> Graphical representation of recursion process
#include <iostream>
using namespace std;
int count = 0;
void f() {
	if (count == 3)
		return;
	cout << count << endl;
	count++;
	f();
}

int main () {
	f();
}

					// Recursion Tree
					//		  f()
					//		  /
					//	    f()
					//	    /
					//	  f()
					//    /
					//  f()