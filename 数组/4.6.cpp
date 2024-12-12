#include<iostream>
#include<cctype>
using namespace std;
void count(const char s[], int counts[]) 
{
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	for (int i = 0; s[i] != '\0'; i++)
	{
		char n = tolower(s[i]);
		if (n >= 'a' && n <= 'z') {
			counts[n - 'a']++;
		}
	}
}
int main()
{
	char s[100];
	cout << "Enter a string:";
	cin >> s[100];
	int counts[26] = { 0 };
	cin.getline(s, 100);
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
		{
			char letter = 'a' + i;	
			cout << letter << ":" << counts[i] << " times" << endl;
		}
	}
	return 0;
}