#include<iostream>
using namespace std;
int main() {
	char xiao,da;
	char z;
	cin >> xiao;
	if (xiao >= 'a' && xiao <= 'z') {
		da= 'A' - 'a' + xiao;
		cout << da;
	}
	else {
		cout << (int)xiao + 1;
	}
	return 0;
}