#include<iostream>
using namespace std;
int main() {
	cout << "输入两个正整数a,b：";
	int a, b,n,z;
	cin >> a >> b;
	int t = min(a,b);
	//求出最大公约数
	for (int i = 1;i<t; i++) {
		n = t % i;
		if (n == 0) {
			z= i;
		}
	}
	int c;
	c = a * b / z;//最小公倍数等于两数之积除以最大公约数
	cout << z << endl;
	cout << c << endl;
	return 0;
}