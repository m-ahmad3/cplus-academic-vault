#include<iostream>
#include<fstream>
using namespace std;

/*
int read(ifstream& file) {
	int average_f = 0;
	file >> average_f;
	return average_f;
}

void writefile(int average_f) {
	
	ofstream file("newfile.txt");
	
	if (!file.is_open()) {
		cout << "File is not created" << endl;;
	}
	else {
		if (average_f > 6) {
			file << "Above Average" << endl;
			cout << "Above Average" << endl;
		}
		else if (average_f >= 4 && average_f <= 6) {
			file << "On Average" << endl;
			cout << "On Average" << endl;
		}
		else if (average_f < 4) {
			file << "Below Average" << endl;
			cout << "Below Average" << endl;
		}
		file.close();
	}
}



int main()
{

	int average=0;
	ifstream file("average.txt");
	if (!file.is_open()) {
		cout << "File is not found!" << endl;
	}
	else {
		average = read(file);
		file.close();
	}
	writefile(average);
	


	return 0;
}
*/

//Task 2

/*
float sum(int x, int y) {
	float result = x + y;

	return result;
}
float subtraction(int x, int y) {
	float result = x - y;

	return result;
}
float multiplication(int x, int y) {
	float result = x * y;

	return result;
}
float division(int x, int y) {
	float result = x / y;

	return result;
}

float calculator() {
	float a, b,output=0.000;
	char ch;
	cout << "Enter 1st Number: ";
	cin >> a;
	cout << "Enter 2nd Number: ";
	cin >> b;
	cout << "Enter Character: ";
	cin >> ch;
	if (ch == '+') {
		output = sum(a, b);
		return output;
	}
	else if (ch == '-') {
		output = subtraction(a, b);
		return output;
	}
	else if (ch == '*') {
		output = multiplication(a, b);
		return output;
	}
	else if (ch == '/') {
		output = division(a, b);
		return output;
	}
	else {
		return output;
	}
	
}

int main()
{
	cout<<"The Result is: "<<calculator();
	return 0;
}

*/

//Task 3
/*
void days(int input_f) {
	cout << "The day is: ";
	if (input_f == 1) {
		cout << "Monday" << endl;
	}
	else if (input_f == 2) {
		cout << "Tuesday" << endl;
	}
	else if (input_f == 3) {
		cout << "Wednesday" << endl;
	}
	else if (input_f == 4) {
		cout << "Thursday" << endl;
	}
	else if (input_f == 5) {
		cout << "Friday" << endl;
	}
	else if (input_f == 6) {
		cout << "Saturday" << endl;
	}
	else if (input_f == 7) {
		cout << "Sunday" << endl;
	}
}

int main()
{
	int input;
	cout << "Enter the Number of Day: ";
	cin >> input;
	days(input);
	return 0;
}
*/

//Task 4
/*
void ascending(int arr2[],int size_f) {
	
	for (int a = 0; a < size_f - 1; a++) {
		for (int b = 0; b < size_f - a-1; b++) {
			if (arr2[b] > arr2[b + 1]) {
				int change = arr2[b];
				arr2[b] = arr2[b + 1];
				arr2[b + 1] = change;
			}
		}
	}
}
int main()
{
	int n1 = 2, n2 = 4;
	cout << n1 % n2;
	const int size = 10;
	int arr1[size];
	cout << "Enter The Numbers "<<size_f<<" :";
	for (int a = -0; a < size; a++) {
		cin >> arr1[a];
	}
	cout << "Input Array is: ";
	for (int a = -0; a < size; a++) {
		cout<<arr1[a]<<" ";
	}
	cout << endl;
	ascending(arr1,size);
	cout << "Array in Ascending Order: ";
	for (int a = 0; a < size; a++) {
		cout << arr1[a] << " ";
	}
	cout << endl;
	return 0;
}
*/

//Task 5
/*
float calculate_average(float n1, float n2, float n3) {
	float average = (n1 + n2 + n3) / 3;
	return average;
}
int main()
{
	float a, b, c,result;
	cout << "Enter Value in a: ";
	cin >> a;
	cout << "Enter Value in b: ";
	cin >> b;
	cout << "Enter Value in c: ";
	cin >> c;
	result = calculate_average(a, b, c);
	cout << "Average is: " << result << endl;
	return 0;
}
*/



//Task 6

void ascending(int arr_f[],int size_f) {
	
	for (int a = 0; a < size_f - 1; a++) {
		for (int b = 0; b < size_f - a-1; b++) {
			if (arr_f[b] > arr_f[b + 1]) {
				int change = arr_f[b];
				arr_f[b] = arr_f[b + 1];
				arr_f[b + 1] = change;
			}
		}
	}
}


int main()
{
	int size,average,max,min;
	cout<<"Please input the number of scores: ";
	cin>>size;
	int *arr=new int[size];
	for(int a=0;a<size;a++){
		cout<<"Please enter Score no. "<<a+1<<": ";
		cin>>arr[a];
		average+=arr[a];
	}
	min=arr[0];
	max=arr[0];
	for(int a=1;a<size;a++){
		if(arr[a]>max){
			max=arr[a];
		}
		if(arr[a]<min){
			min=arr[a];
		}
	}
	ascending(arr,size);
	average=average/size;
	cout<<"The average of the scores is: "<<average<<endl;
	cout<<"The Maximum Score is : "<<max<<endl;
	cout<<"The Minimum Score is: "<<min<<endl;
	cout<<"Following are the Scores in Ascending Order: "<<endl;
	for(int a=0;a<size;a++){
		cout<<arr[a]<<endl;
	}
	return 0;
}