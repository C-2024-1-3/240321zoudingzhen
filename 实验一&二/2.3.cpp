#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	double t = 0;
	if (c < a) {
		t = a;
		a = c;
		c = t;
	}
	if (b< a) {
		t = a;
		a = b;
		b = t;
	}
	if (c < b) {
		t = b;
		b= c;
		c = t;
	}
	if (a + b > c) {
		cout << a + b + c<<endl;
		if (a == b || b == c || a == c) {
			cout << "该三角形是等腰三角形";
		}
	}
	return 0;
}