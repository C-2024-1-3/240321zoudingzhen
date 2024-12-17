#include<iostream>
using namespace std;
class Student
{
private:
	int num;
	int score;
public:
	Student(int no,int cj):num(no),score(cj){}
	int getnum() const
	{
		return num;
	}
	int getscore() const
	{
		return score;
	}
	void max(Student*students[],int size)
	{
		int maxt = 0;
		for(int i=1;i<size;i++)
		{
			if (students[i]->getscore() > students[maxt]->getscore())
			{
				maxt = i;
			}
		}
		cout << students[maxt]->getnum() << endl;
	}
};
int main()
{
	Student* students[5];
	for (int i = 0; i < 5; i++)
	{
		int num, score;
		cin >> num >> score;
		students[i] = new Student(num, score);
	}
	students[0]->max(students, 5);
	for (int i = 0; i < 5; i++)
	{
		delete students[i];
	}
	return 0;
}