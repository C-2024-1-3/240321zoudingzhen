#include<iostream>
using namespace std;
int main() {
	double x0=0,a,t;
	cin >> a;
	if (a > 0) {
		x0 = a;
		t = (x0 + a / x0) / 2;
		while (fabs(t - x0) > 1e-5) {
			x0 = t;
			t = (x0 + a / x0) / 2;
		}
		cout << t;
	}
	return 0;
}