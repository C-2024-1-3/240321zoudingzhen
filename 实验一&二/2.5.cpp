#include<iostream>
#include<cctype>
using namespace std;
int main() {
	char c;
	int letters = 0;
	int spaces = 0;
	int digits = 0;
	int others = 0;//初始化英文字母，空格，数字字符，和其他字符的数量
	cout << "请输入一行字符：";
	//使用getchar函数逐个读取字符
	while ((c = getchar()) &&c!= '\n') {
		if ((c>=97&&c<=122)||(c>=65&&c<=90)) {
			letters++;
		}
		else if (isspace(c)) {
			spaces++;
		}
		else if (isdigit(c)) {
			digits++;
		}
		else {
			others++;
		}
	}
	cout << "英文字母个数："<< letters <<endl;
	cout << "空格个数："<< spaces <<endl;
	cout << "数字字母个数："<< digits<<endl;
	cout << "其他字符个数："<< others <<endl;
	return 0;
}