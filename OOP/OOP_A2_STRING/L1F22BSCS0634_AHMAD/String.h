#include<iostream>
using namespace std;

class String {
private:
    char* string; // Pointer to dynamically allocated memory for the string

public:
    // Default constructor
    String();

    // Destructor
    ~String();

    // Copy constructor
    String(const String&);

    // Overloaded constructor for substring
    String(const String&, int, int);

    // Overloaded constructor for substring c-string
    String(const char*);

    // Overloaded constructor from the sequence
    String(const char* s, int n);

    // Overloaded constructor for fill
    String(int n, char c);

    // Return length of the string
    int length();

    // Get a character in the string
    char at(int i);

    // Sub-string
    String substr(int pos, int len) const;

    // Operator <<
    friend ostream& operator<< (ostream& os, const String& str);
};
