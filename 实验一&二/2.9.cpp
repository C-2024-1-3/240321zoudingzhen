#include<iostream>
using namespace std;
int main() {
	double x = 0.8,s;
	int t = 2, sum = 0, z = 0;
	for (int i = 1;; i++) {
		sum += t;
		if (sum <= 100) {
			t = 2 * t;
			z++;
		}
		else
			break;
		
	}
	sum = sum - t;
	s = sum * x / z;
	cout << s;
	return 0;
}