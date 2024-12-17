#include<iostream>
using namespace std;
class cft
{
private:
	int length;
	int width;
	int height;
public:
	void input()
	{
		cin >> length >> width >> height;
	}
	void output()
	{
		cout << length * width * height << endl;
	}
};
int main()
{
	cft cft1;
	cft cft2;
	cft cft3;
	cft1.input();
	cft2.input();
	cft3.input();
	cft1.output();
	cft2.output();
	cft3.output();
	return 0;
}