#include<iostream>
using namespace std;
int main() {
	int a[10];
	int count = 0;
	cout << "Enter ten numbers:";
	for (int i = 1; i <= 10; i++) {
		int num;
		cin >> num;
		bool isnew = true;
		for (int j = 0; j < count; j++) {
			if (a[j] == num) {
				isnew = false;
				break;
			}
		}
		if (isnew == true) {
			a[count] = num;
			count++;
		}
	}
	cout << "The distinct numbers are:";
	for (int i = 0; i < count; i++) {
		cout << a[i] << " ";
	}
	return 0;
}