#include<iostream>
using namespace std;
int main() {
	cout << "����������";
	double x, y;
	cin >> x>>y;
	char c;
	cout << "������һ�������";
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
	if ((int)x==x&&(int)y==y )//�ж�x��y�Ƿ�������
	{
		if (c == '%') {
			cout << (int)x %(int) y << endl;
		}
	}
	return 0;
}