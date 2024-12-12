#include <iostream>
using namespace std;

void fun1(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int num;
    cout << "输入数组个数";
    cin >> num;
    int* arr = new int[num];
    cout << "输入数组";
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }
    fun1(arr, num);
    for (int i = 0; i < num; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}