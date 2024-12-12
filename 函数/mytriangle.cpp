#include<iostream>
#include"mytriangle.h"
using namespace std;
int main() {
	double side1, side2, side3;
	cin >> side1 >> side2 >> side3;
	cout << is_valid(side1,side2,side3)<<endl;
	cout << area(side1,side2,side3);
}