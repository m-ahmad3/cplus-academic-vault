#include<iostream>
#include<fstream>
using namespace std;

int main()
{
					//Muhammad Ahmad
					//L1F22BSCS0634
					//Assignment 1
	
    //Task 1: Read integers from a file, find prime numbers and write to a new file.
    
  /*  
    //Declare arrays for input integers and their results
    int arr1[5], result[5];

    //Open input file
    ifstream file1("Integer.txt");
    if(!file1.is_open()){
        cout << "File doesn't exist! :(" << endl;
    }
    else
    {
        //Read integers from file and store them in array
        for(int a=0; a<5; a++){
            file1 >> arr1[a];
            cout << arr1[a] << " ";
        }
        cout << endl; 

        // Close input file
        file1.close();

        //Loop to check for prime numbers
        for(int a=0; a<5; a++){
            int check = 0;
            for(int b=1; b<=arr1[a]; b++){
                if(arr1[a]%b==0){
                    check++;
                }
            }
            //Store result (1 for prime, 0 for non-prime) in another array
            if(check==2){
                result[a] = 1;
            }
            else{
                result[a] = 0;    
            }
            
            // Print the result in form of 1 or 0
            cout << result[a] << " ";
        }
        
        //Open output file
        ofstream file2("Result.txt");
        
        //Writing results to output file
        for(int a=0; a<5; a++){
            file2 << result[a] << " ";
        }
        // Close output file
        file2.close();
    }
    
    */
    
    
    //Task 2: Read marks data from a file, find final grade and write to a new file.
  
    //Char array for name and grade of students
    char name[20], result[3];
    
    //For calculating marks
    float marks[3],total_marks;

    // Open input and output file
    ifstream file1("Input.txt");
    ofstream file2("Output.txt");
    
    if(!file1.is_open()){
        cout << "File doesn't exist! :(" << endl;
    }
    
    else
    {
        // Read name and marks from file and store them in array
        for(int a=0; a<3; a++){
        	
        	//reading name and marks of three subjects
            file1>>name>>marks[0]>>marks[1]>>marks[2];
            
            cout<<name<<" "<<marks[0]<<" "<<marks[1]<<" "<<marks[2]<<endl;
			            
            //Calculating the average marks of eah student
            total_marks=(marks[0]+marks[1]+marks[2])/3;
            
            //if/else to find the final grade according to marks
            if(total_marks>=84.5){
            	result[a]='A';
			}
			else if(total_marks>=71.5&&total_marks<84.5){
            	result[a]='B';
			}
			else if(total_marks>=57.5&&total_marks<71.5){
            	result[a]='C';
			}
			else if(total_marks>=49.5&&total_marks<57.5){
            	result[a]='D';
			}
			else{
				result[a]='F';
			}
            
            //displaying the garde with name of each student in new file
            file2<<name<<" Obtained "<<result[a]<<" Grade"<<endl;
            
            cout<<name<<" Obtained "<<result[a]<<" Grade"<<endl;
        }
        //closing both input/output files
        file1.close();
        file2.close();
   }
	
       
    return 0;
}