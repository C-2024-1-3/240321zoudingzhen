#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	cout << "����һ�����϶�";
	double x,c;
	cin >> x;
	c = (x - 32) / 1.8;
	cout << fixed << setprecision(2) << c;
	return 0;
}