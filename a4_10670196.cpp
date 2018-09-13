#include <iostream>
#include <cassert>
using namespace std;
void validate(int);
double GCD(int, int);
int main(int argc, char const *argv[])
{
	int firstnum, secondnum;
	cout << "Please enter two numbers to find the greatest common divisor;\n";

// first number input
	cout << "First Number: " ;
	cin >> firstnum;
	validate(firstnum);

// second number input
	cout << "Second Number: ";
	cin >> secondnum;
	validate(secondnum);

// output the greatest common divisor
	cout << GCD(firstnum, secondnum);
	return 0;
}

void validate(int a){
	for(;;){
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(200, '\n');
		cout << "Please enter a valid number: ";
		cin >> a;
		cout << endl;
	} else
	{
		break;
	}}
}

double GCD(int big, int small){
	double remainder;

// check and see whether the second one is smaller than the big first or not
	if (big < small)
	{
// when it is bigger, then swap them and find the mod
	remainder = small % big;
	if(remainder == 0){
		return big;
	} else 
	{
//  else run the code over and over again
		return GCD(small, remainder);
	}
	}else{
// if it is greater find the mod of them
		remainder = big % small;
	

//  when the remainder is equal to zero then the gcd is the small one
	if(remainder == 0){
		return small;
	} else 
	{
//  else run the code over and over again
		return GCD(big, remainder);
	}
}
}
