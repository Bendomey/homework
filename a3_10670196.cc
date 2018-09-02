#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int scores;
	cout << "\t\t\t\t\t\t UNIVERSITY OF GHANA" << endl;
	cout << "Please enter your score: ";
	cin >> scores;
	cout << endl;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(200, '\n');
			cout << "Please enter a valid number: ";
			cin >> scores;
			cout << endl;
		}

		if ((scores >= 80) && (scores <= 100))
		{
			cout << "Your grade is A";
		}
		if ((scores >= 75) && (scores < 80))
		{
			cout << "Your grade is B+";
		}	
		if ((scores >= 70) && (scores < 75))
		{
			cout << "Your grade is B";
		}
		if ((scores >= 65) && (scores < 70))
		{
			cout << "Your grade is C+";
		}
		if ((scores >= 60) && (scores < 65))
		{
			cout << "Your grade is C";
		}
		if ((scores >= 55) && (scores < 60))
		{
			cout << "Your grade is D+";
		}
		if ((scores >= 50) && (scores < 55))
		{
			cout << "Your grade is D";
		}
		if ((scores >= 45) && (scores < 50))
		{
			cout << "Your grade is E";
		}
		if ((scores >= 0) && (scores < 45))
		{
			cout << "Your grade is F";
		}
		if ((scores > 100) || (scores < 0))
		{

			cout << "Please enter a number between 0 and 100: ";

		}
		cout << endl;
	return 0;
}