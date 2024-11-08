#include<iostream>
using namespace std;
int main() {
	cout << "输入两个数";
	double x, y;
	cin >> x>>y;
	char c;
	cout << "请输入一个运算符";
	cin >> c;
	if (c == '+') {
		cout << x + y << endl;
	}
	if (c == '-') {
		cout << x - y << endl;
	}
	if (c == '*') {
		cout << x * y << endl;
	}
	if (c == '/') {
		if (y != 0) {
			cout << x / y << endl;
		}
	}
	if ((int)x==x&&(int)y==y )//判断x，y是否是整形
	{
		if (c == '%') {
			cout << (int)x %(int) y << endl;
		}
	}
	return 0;
}