#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	void point(int x=0,int y=0)
	{
		this->x = x, this->y = y;
	}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	int i, j;
	cin >> i >> j;
	Point point1;
	point1.point(60, 80);
	point1.display();
	point1.setPoint(i,j);
	point1.display();
	return 0;
	
}