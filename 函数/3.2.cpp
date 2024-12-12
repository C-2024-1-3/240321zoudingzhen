#include<iostream>
using namespace std;
bool is_prime(int num) {
	int z = (int)sqrt((double)num);
	for (int i = 2;  i <= z; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int num=2;
	int count = 0;
	while (count < 200) {
		if (is_prime(num)) {
			cout << num<<" ";
			count++;
		}
		if (count % 10 == 0) {
			cout << endl;
		}
		num++;
	}
	return 0;
}