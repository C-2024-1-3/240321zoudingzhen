#include<iostream>
using namespace std;
int main() {
	bool lock[100];
	for (int i = 0; i < 100; i++) {
		lock[i] = false;
	}
	for (int id = 1; id <= 100; id++) {
		for (int j = id-1; j < 100; j += id) {
			lock[j] = !lock[j];
		}
	}
	for (int i = 0; i < 100; i++) {
		if (lock[i] == true) {
			cout << i + 1<<" ";
		}
	}
	return 0;
}