#include <string>
using namespace std;

class Student
{
public:
    string name;
    int age;
    Student();
    Student(const Student &s);
};