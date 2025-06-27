#include"String.h"

					// MUHAMMAD AHMAD

int main() {
    // Test cases for different constructors and member functions

    // Default constructor
    String s0("Initial string");
    // constructors used in the same order as described above:
    String s1; // Default constructor
    String s2(s0); // Copy constructor
    String s3(s0, 8, 3); // Overloaded constructor for substring
    String s4("A character sequence"); // Overloaded constructor for substring c-string
    String s5("Another character sequence", 12); // Overloaded constructor from the sequence
    String s6a(10, 'x'); // Overloaded constructor for fill
    String s6b(10, 42); // Overloaded constructor for fill (ASCII code for '*')
    String s7 = s4.substr(2, 10); // Sub-string

    // Output test results
    cout << "s1: " << s1 << "\ns2: " << s2 << "\ns3: " << s3;
    cout << "\ns4: " << s4 << "\ns5: " << s5 << "\ns6a: " << s6a;
    cout << "\ns6b: " << s6b << "\ns7: " << s7 << '\n';

    // More tests
    String str("Example to check");
    String str2 = str.substr(3, 5); // Extract substring from position 3 with length 5

    cout << "\nThe Value in str object is : " << str << endl;
    cout << "The size of str object is: " << str.length() << endl;
    cout << "Char at 6th index is: " << str.at(6) << endl;
    cout << "Char at 2nd index is: " << str.at(2) << endl;
    cout << "Substring is: " << str2 << endl;

    return 0;
}
