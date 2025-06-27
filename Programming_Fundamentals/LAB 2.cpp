#include<iostream>
#include<string>
using namespace std;
int main()
{
	//MuhammadAhmad


	//TASK 1
	/*cout<<"\t\tSum of Array"<<endl<<endl;
	int arr[10],sum=0;
	cout << "Enter The Values of Array (10): ";
	for (int a = 0; a < 10; a++){
		cin >> arr[a];
	}
	for (int a = 0; a < 10; a++){
		sum =sum+ arr[a];
	}
	cout << "The Sum of all elements in Array are: " << sum << endl;*/



	//TASK 2    WORD SEARCHING ALGORITHM
/*	cout<<"\t\tWord Searching"<<endl<<endl;
	//initialization and declaration
	string input;
	string arr[100] = {"car","bike","conpiracy","computer","progamming","visual","holistic","bait","robert","computer"};
	
	//Input from user to find
	cout << "Please Enter the word to find: ";
	cin >> input;
	
	//Loop for searching word
	int count = 0;
	for (int a = 0; a < 100; a++) {
		if (input == arr[a]) {
			count++;
		}
	}
	if (count > 0) {
		cout << "\nWord '" << input << "' is present: " << count << " times" << endl;
	}
	else
	{
		cout << "\nThe word " << input << " is not present" << endl;
	}*/
 

	//TASK 3    STORE UBER RATING
	
 /*	cout<<"\t\tUber Rating"<<endl<<endl;
	//initialization and declaration
	int rating[10];
	string names[10]={"Ali","Abdullah","Haris","David","Philips","Ahmad","Azeem","Umair","Muneeb","Zaid",};
	//input fro user of every rider with name
	for (int a = 0; a < 10; a++) {
		cout << "Enter Rating of '"<<names[a]<<"' (1-5): ";
		cin >> rating[a];
		if (rating[a] < 1 || rating[a]>5) {
			cout << "Invalid Value!" << endl;
			cout << "Please Again Enter Rating of "<<names[a]<<" (1-5): ";
			cin >> rating[a];
		}
	}
	//output of ratings
	cout << "\nData of Ratings: ";
	for (int a = 0; a < 10; a++) {
		cout << rating[a] <<" ";
	}
	cout << endl;
	*/


	//TASK 4   GRADE CALCULATION
	cout << "\t\tGrades Analysis of ITC" << endl<<endl;
	//initialization and declaration
	 char grades[10];
	int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;
	
	//input from user of grades according to roll no.
	for (int a = 0; a < 10; a++) {
		cout << "Enter The Grade of Roll No. " << a + 1 << ": ";
		cin >> grades[a];	

			if (grades[a] == 'A') {
				countA++;
			}
			else if (grades[a] == 'B') {
				countB++;
			}
			else if (grades[a] == 'C') {
				countC++;
			}
			else if (grades[a] == 'D') {
				countD++;
			}
			else if (grades[a] == 'F') {
				countF++;
			}
		}
	//output of each grade count
	cout << "\nCount of each Grade in Class is: " << endl; 
	cout<< "A= " << countA << ", B= " << countB << ", C= " << countC << ", D= " << countD << ", F= " << countF << endl;
	
		




	
	return 0;
}