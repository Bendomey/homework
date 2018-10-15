#include<iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;
void validateInput(int);
struct studentType
{
	string id, name;
	int age, score;
	char gender;
	string grade;
};
int main(int argc, char const *argv[])
{
	studentType student[5];
	ofstream outfile;
	double averageAge, averageScore;
	static int maleCount = 0, femaleCount = 0;
	// 
	for (int i = 0; i < 5; ++i)
	{
		cout << "\n\n\t\t\tStudent " << i+1 << endl;
		// for id
		cout << "Student ID: ";
		cin >> student[i].id;

		// for name
		cout << "Name: ";
		cin >> student[i].name;

		// for age
		cout << "Age: ";
		cin >> student[i].age;
		validateInput(student[i].age);

		// for grade
		cout << "Gender (m or f): ";
		cin >> student[i].gender;
		if (student[i].gender == 'm' || student[i].gender == 'f')
		{
			if (student[i].gender == 'm')
			{
				maleCount += 1;
			}else 
			if (student[i].gender == 'f')
			{
				femaleCount += 1;
			}
		}

		// for score
		cout << "Score: ";
		cin >> student[i].score;
		validateInput(student[i].score);
		
		//for grade
		if (student[i].score <= 100 && student[i].score >= 80)
		{
			student[i].grade = 'A';
		}else
		if (student[i].score <= 79 && student[i].score >=70)
		{
			student[i].grade = 'B';
		}else
		if (student[i].score <= 69 && student[i].score >= 60)
		{
			student[i].grade = 'C';
		}else
		if (student[i].score <= 59 && student[i].score >=50)
		{
			student[i].grade = 'D';
		}else
		if (student[i].score <= 49 && student[i].score >=40)
		{
			student[i].grade = 'E';
		}else
		if (student[i].score <=39 && student[i].score >= 0)
		{
			student[i].grade = 'F';
		}else
		if (student[i].score < 0 || student[i].score > 100)
		{
			student[i].grade = "Invalid Score";
		}

		// end of first loop
	}


	// for sum
	int ageSum = 0, scoreSum = 0;
	for (int i = 0; i < 5; ++i)
	{
		ageSum += student[i].age;
		scoreSum += student[i].score;
	}

	// for averages
	averageAge = ageSum / 5;
	averageScore = scoreSum / 5;


	// output to file
	outfile.open("messages.txt");

	//for the ouptut
	outfile <<"\n\n\n";
	outfile << "No. " << setw(10) << "ID Number" << setw(15) << "Name"<< setw(15) << "Age"<< setw(15) << "Gender" << setw(15) << "Score" << setw(15) << "Grade\n";
	outfile << "********************************************************************************************";

	for (int i = 0; i < 5; ++i)
	{
		outfile  << "\n" <<i+1 << ". " << "\t" ;
		outfile << student[i].id <<"\t\t";
		outfile << student[i].name << "\t\t" << setw(3);
		outfile << student[i].age << "\t\t";
		outfile << student[i].gender << "\t\t";
		outfile << student[i].score << "\t\t";
		outfile << student[i].grade << endl;
	}

	outfile << "\n********************************************************************************************";
	outfile << "\nAverage Age: " << averageAge << endl;
	outfile << "Average Score: " << averageScore << endl;
	outfile << "Male Count: " << maleCount << endl;
	outfile << "Female Count: " << femaleCount << endl;


	return 0;
}

// for input validation
void validateInput(int a){
	while(cin.fail()){
		cin.clear();
		cin.ignore(200, '\n');
		cout <<"Please enter a valid number: ";
		cin >> a;
	}
}

