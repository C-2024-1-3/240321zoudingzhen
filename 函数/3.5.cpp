#include<iostream>
using namespace std;
int fun1(int a) {
	if (a == 10) {
		return 1;
	}
	else {
		return((fun1(a + 1) + 1) * 2);
	}
}
int main() {
	cout << fun1(1);
	return 0;
}