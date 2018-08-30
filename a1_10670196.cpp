#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	string name;
	int number;
	char exit;
	cout << "Please enter your name: ";
	cin >> name;
	system("cls");
	cout << "\t\t\t\t\t WELCOME " << name << "!\n" << endl;
	while(!(exit == 'n')){

	cout << "Please enter a number: ";
	cin >> number;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(200, '\n');
		cout << "Please enter a valid number: ";
		cin >> number;
	}
	
	// checking to see whether the number is a prime
	bool k = 1;
	for (int i = 2; i < (number/2); i++)
	{
		if((number % i) == 0){
			k = 0;
		}
	}

	if (k == 0){
		cout << "This number is not a Prime number.\n" << endl;
	}else 
	{cout << "This number is a Prime number.\n" << endl;
	}
	cout << "Do you wish to continue? [y] Yes or [n] No:" << endl;
	cin >> exit;
	cout << endl;
	if (exit == 'y'){
	continue;
	}else
	if(exit == 'n')break;
	else{
		cout << "Error :( \nPlease enter a valid response: ";
			cin >> exit;
			cout << endl;
}


}
	return 0;
}
