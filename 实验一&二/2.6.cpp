#include<iostream>
using namespace std;
int main() {
	cout << "��������������a,b��";
	int a, b,n,z;
	cin >> a >> b;
	int t = min(a,b);
	//������Լ��
	for (int i = 1;i<t; i++) {
		n = t % i;
		if (n == 0) {
			z= i;
		}
	}
	int c;
	c = a * b / z;//��С��������������֮���������Լ��
	cout << z << endl;
	cout << c << endl;
	return 0;
}