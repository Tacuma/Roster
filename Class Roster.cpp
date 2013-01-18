//Tacuma Solomon
//Computer Science I


#include<iostream>
#include<string>
#include <fstream>

using namespace std; 


struct school_info // Defines a record for school info
{
	string major;
	string dept;
	float GPA; 
};


struct studentType // Defines a record for student type
{

	string name;
	string ID;
	int age; 
	char classification; 
	school_info sch_info;

};

void PrintArray(studentType[]);// Prints out the contents of the array
void Footer();

int main() 
{
	ifstream infile;
	char dummy;
	studentType CompI_class[10];
	infile.open("roster.txt"); // Opens file indat.dat
		for (int count=0;count<10;count++) // Loop that reads each record in the roster
		{
			getline(infile, CompI_class[count].name);
			infile >> CompI_class[count].ID >> 
			CompI_class[count].age >>
			CompI_class[count].classification >> 
			CompI_class[count].sch_info.major >> 
			CompI_class[count].sch_info.dept >> 
			CompI_class[count].sch_info.GPA; 
			infile.get(dummy);  // to consume the end of line character
		}
	PrintArray(CompI_class); 
	Footer();
	system("pause");
	return 0; 
}


void PrintArray (studentType Comp_class[]) // Prints out the contents of the array
{
	int freshman=0;
	int sophomore=0;
	int junior=0;
	cout <<"Array for Class Roster: " << endl << endl;

	cout << "*********" << endl;
	for (int number=0;number<10;number++) // Prints the array and counts the number of F, S, and J
	{

		if (Comp_class[number].classification=='F')
			freshman++;

		else if (Comp_class[number].classification=='S')
			sophomore++;

		else if (Comp_class[number].classification=='J')
			junior++;

		cout << Comp_class[number].name << " " <<
		Comp_class[number].ID << " " << 
		Comp_class[number].age << " " <<
		Comp_class[number].classification << " " << 
		Comp_class[number].sch_info.major << " " << 
		Comp_class[number].sch_info.dept << " " << 
		Comp_class[number].sch_info.GPA << endl;
	}

	cout << "*********" << endl;
	cout << endl << endl;

	cout << "The number of Freshmen is " << freshman << endl;
	cout << "The number of Sophomores is " << sophomore << endl;
	cout << "The number of Juniors is " << junior <<endl << endl;
}

void Footer()
{
	cout << endl << endl;
	cout << "() Code by Tacuma Solomon " << endl;
	cout << "() Not for Redistribution or Reuse." << endl << endl;
}

/*
Array for Class Roster:

*********
Barak Obama  @123456 20 S ComputerScience SYCS 3.45
John MCCain  @879797 22 F ComputerEngineering CE 2
George Washington  @585326 20 J Math Math 1.05
John Kennedy  @879797 19 F ComputerEngineering CE 4
Charles Barkley  @122222 24 F ComputerScience SYCS 4
John Edwards  @222522 21 F Math Math 3.04
Abraham Lincoln  @333333 23 J ComputerScience SYCS 1.45
Thomas Jefferson  @999997 18 F ComputerEngineering CE 3
John Adams  @000006 23 J ComputerScience SYCS 0.45
Harry Truman  @111117 26 S ComputerEngineering CE 2.17
*********


The number of Freshmen is 5
The number of Sophomores is 2
The number of Juniors is 3



() Code by Tacuma Solomon
() Not for Redistribution or Reuse.

Press any key to continue . . .
*/