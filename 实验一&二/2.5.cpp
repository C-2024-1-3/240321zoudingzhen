#include<iostream>
#include<cctype>
using namespace std;
int main() {
	char c;
	int letters = 0;
	int spaces = 0;
	int digits = 0;
	int others = 0;//��ʼ��Ӣ����ĸ���ո������ַ����������ַ�������
	cout << "������һ���ַ���";
	//ʹ��getchar���������ȡ�ַ�
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
	cout << "Ӣ����ĸ������"<< letters <<endl;
	cout << "�ո������"<< spaces <<endl;
	cout << "������ĸ������"<< digits<<endl;
	cout << "�����ַ�������"<< others <<endl;
	return 0;
}