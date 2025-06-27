#include "CommunityMember.h"
#include "Employee.h"
#include "Faculty.h"
#include "Administrator.h"
#include "Teacher.h"
#include "Staff.h"
#include "Student.h"
#include "UndergraduateStudent.h"
#include "Junior.h"
#include "Senior.h"
#include "Sophomore.h"
#include "Freshman.h"
#include "Alumnus.h"
#include "GraduateStudent.h"
#include "DoctoralStudent.h"
#include "MastersStudent.h"
#include "AdministratorTeacher.h"

int main() {
    // Create objects for each class
    CommunityMember communityMember("Ali Khan");
    Employee employee("Ayesha Ahmed", 12345);
    Faculty faculty("Ahmed Hassan", 54321, "Computer Science");
    Administrator administrator("Bushra Fatima", 98765, "Business Administration", "Managing Finances");
    Teacher teacher("Cyril Masood", 13579, "Mathematics", "Algebra");
    Staff staff("Dua Malik", 24680, "Human Resources");
    Student student("Emaan Farooq", "Biology", "2023001");
    UndergraduateStudent undergraduateStudent("Farhan Mahmood", "Physics", "2023002");
    Junior junior("Gul Rukh", "Chemistry", "2023003");
    Senior senior("Hassan Ali", "Geology", "2023004");
    Sophomore sophomore("Iqra Khan", "History", "2023005");
    Freshman freshman("Jawad Khan", "English", "2023006");
    Alumnus alumnus("Kiran Ali", 2023);
    GraduateStudent graduateStudent("Mehak Javed", "Computer Engineering", "2024001");
    DoctoralStudent doctoralStudent("Nida Iqbal", "Electrical Engineering", "2024002");
    MastersStudent mastersStudent("Omar Khalid", "Mechanical Engineering", "2024003");
    AdministratorTeacher administratorTeacher("Pari Gul", 13579, "Mathematics", "Managing Curriculum", "Algebra");

    // Call a function inherited in each class with separation
    communityMember.Display();
    cout << endl;
    employee.Display();
    cout << endl;
    faculty.Display();
    cout << endl;
    administrator.Display();
    cout << endl;
    teacher.Display();
    cout << endl;
    staff.Display();
    cout << endl;
    student.Display();
    cout << endl;
    undergraduateStudent.Display();
    cout << endl;
    junior.Display();
    cout << endl;
    senior.Display();
    cout << endl;
    sophomore.Display();
    cout << endl;
    freshman.Display();
    cout << endl;
    alumnus.Display();
    cout << endl;
    graduateStudent.Display();
    cout << endl;
    doctoralStudent.Display();
    cout << endl;
    mastersStudent.Display();
    cout << endl;
    administratorTeacher.Display();
    cout << endl;

    return 0;
}
