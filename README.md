
Class Roster
============


Data Structures/Concepts Used:
==============================
Array, Structs (nested), File I/O, Functions


Description:
============
This Program stores its data in an array of Records.
The file "roster.txt" is opened, and each student's information, represented as:

()Student Name
()Student ID
()Student age
()Student Classification
()School Info

is read into a the struct, studentType. The section,
school info, of type, Sch_info, is a struct that holds

()Major
()Department
()GPA

An array of size 10 is created and the structs are held there.
The program has a function, PrintArray(studentType[]), that
prints the contents of the array.


Output:
=======
		
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
	
		