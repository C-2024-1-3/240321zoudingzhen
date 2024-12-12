#include<iostream>
using namespace std;
int fun1(int&m,int&n) {
    int a = m;
    int b = n;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int fun2(int& m, int& n) {
    return (m * n) / fun1(m, n);
}
int main() {
    int m, n;
    cin >> m >> n;
    int z = fun1(m, n);
    int l = fun2(m, n);
    cout << z << endl;
    cout<<l;
    return 0;
}