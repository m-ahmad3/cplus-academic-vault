#include<iostream>
using namespace std;
int main()
{
	//Task 1 Union
/*	cout<<"\t\tUnion of Two Arrays"<<endl<<endl;
	
	//intitialization and declaration
	int arr1[4], arr2[4],unio[8],b=4;
	
	//input of Array 1
	cout << "Enter the Elements of Array 1 (4): ";
	for (int a = 0; a < 4; a++){
		cin >> arr1[a];
	}
	
	//input of Array 2
	cout << "Enter the Elements of Array 2 (4): ";
	for (int a = 0; a < 4; a++){
		cin >> arr2[a];
	}
	
	//loop for union of Array 1 and 2
	for (int a = 0; a < 4; a++){
		unio[a] = arr1[a];
		unio[b] = arr2[a];
		b++;
		}
	
	//output of union
	cout << "Union of Array 1 and Array 2 is: ";
	for (int a = 0; a < 8; a++){
		cout << unio[a] << " ";
	}
	cout << endl;
	*/
	//Task 2 Intersection
	/*cout<<"\t\tIntersection of Two Arrays"<<endl<<endl;
	
	//initialization and declaration
	int arr1[5], arr2[5],inter[10],count=0;
	
	//input of array 1
	cout << "Enter the Elements of Array 1 (5): ";
	for (int a = 0; a < 5; a++){
		cin >> arr1[a];
	}
	
	//input of array 2
	cout << "Enter the Elements of Array 2 (5): ";
	for (int a = 0; a < 5; a++){
		cin >> arr2[a];
	}
	
	//loop to find intersection of two arrays
	for (int a = 0; a < 5; a++){
		for (int b = 0; b < 5; b++){
			if (arr1[a] == arr2[b]){
				inter[count] = arr1[a];
				count++;
			}
		}
	}
	//output of intersection
	cout<<"Intersection of Array 1 and 2 is: ";
	for (int a = 0; a < count; a++){
		cout << inter[a] << " ";
	}
*/
	//Task 3 Difference
	/* cout<<"\t\tDifference of Two Arrays"<<endl<<endl;
	
	//initialization and declaration
	int arr1[5], arr2[5],diff[10],dif=0;
	
	//input of array 1
	cout << "Enter the Elements of Array 1 (5): ";
	for (int a = 0; a < 5; a++){
		cin >> arr1[a];
	}
	
	//input of array 2
	cout << "Enter the Elements of Array 2 (5): ";
	for (int a = 0; a < 5; a++){
		cin >> arr2[a];
	}
	
	//Loop 1 to calculate the difference
	for (int a = 0; a < 5; a++){
		int check=0;
		for (int b = 0; b < 5; b++){
			if (arr1[a] != arr2[b]){
				check++;
			}
			if (check == 5){
				diff[dif] = arr1[a];
				dif++;
			}
		}
	}
	//Loop 2 to calculate the difference
	for (int a = 0; a < 5; a++){
		int check = 0;
		for (int b = 0; b < 5; b++){
			if (arr2[a] != arr1[b]){
				check++;
			}
			if (check == 5){
				diff[dif] = arr2[a];
				dif++;
			}
		}
	}
	
	//output the difference
	cout << "Difference of Both Sets are: ";
	for (int a = 0; a < dif; a++){
		cout << diff[a] << " ";
	}
	*/

	//Task 4 Compliment
	cout<<"\t\tCompliment of Array"<<endl<<endl;
	
	//initialization and declaration
	int arr1[5], uni[10] = {1,2,3,4,5,6,7,8,9,10}, common[5],comp[10],size=0;
	
	//output of universal set for user
	cout<<"Universal Set: { ";
	for(int a=0;a<10;a++){
		cout<<uni[a]<<" ";
	}
	cout<<" }"<<endl;
	
	//input of array from user
	cout << "Enter the Elements of Array 1 (5): ";
	for (int a = 0; a < 5; a++){
		cin >> arr1[a];
	}
	
	//Loop to find common b/w array and universal set
	int place = 0;
	for (int a = 0; a < 5; a++){
		for (int b = 0; b < 10; b++){
			if (arr1[a] == uni[b]){
				common[place] = arr1[a];
				place++;
			}
		}
	}
	
	//by using the previous common array, finding compliment
	for (int a = 0; a < 10; a++){
		int check = 0;
		for (int b = 0; b <place; b++){
			if (uni[a] != common[b]){
				check++;
			}
			if (check == place){
				comp[size] = uni[a];
				size++;
			}
		}
	}
	
	//output of end result which is compliment of set
	cout << "Compliment of entered Set is: ";
	for (int a = 0; a < size; a++){
		cout << comp[a] << " ";
	}
	

	return 0;
}