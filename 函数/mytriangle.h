#include<iostream>
using namespace std;
bool is_valid(double side1, double side2, double side3) {
	if (side1 > side2) swap(side1, side2);
	if (side2 > side3) swap(side2, side3);
	if (side1 > side2) swap(side1, side2);
	if (side1 + side2 < side3) {
		return false;
	}
	return true;
}
double area(double side1, double side2, double side3) {
	double s = (side1 + side2 + side3) / 2;
	s = sqrt(s*(s - side1)*(s - side2)*(s - side3));
	return s;
}