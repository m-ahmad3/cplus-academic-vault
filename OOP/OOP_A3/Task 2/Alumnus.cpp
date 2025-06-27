#include "Alumnus.h"

// Constructor
Alumnus::Alumnus(const char* name, int year) :CommunityMember(name) {
	this->GraduationYear = year;
}

// Copy constructor
Alumnus::Alumnus(const Alumnus& obj) : CommunityMember(obj) {
	this->GraduationYear = obj.GraduationYear;
}

// Display function to display alumnus details
void Alumnus::Display() {
	cout << "Alumni Information: " << endl;
	CommunityMember::Display(); // Call base class's Display function
	cout << "Graduation Year: " << GraduationYear << endl << endl;
}
