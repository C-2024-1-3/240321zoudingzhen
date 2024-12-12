#include<iostream>
#include<cstring>
using namespace std;
int indexof(const char s1[], const char s2[])
{
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	for (int i = 0; i <= l2 - l1; i++) 
	{
		int j;
		for ( j = 0; j < l1; j++)
		{
			if (s2[i + j] != s1[j]) {
				break;
			}
		}
		if (j == l1) {
			return i;
		}
	}
	return -1;
}
int main() {
	char s1[100];
	char s2[100];
	cout << "Enter the first string:";
	cin.getline(s1, 100);
	cout << "Enter the second string:";
	cin.getline(s2, 100);
	int n = indexof(s1, s2);
	if (n != -1) {
		cout << "indexof("<<s1<<","<< s2<<") is" << n << endl;
	}
	else {
		cout << "indexof(" << s1 << "," << s2 << ") is -1" << endl;
	}
	return 0;
}