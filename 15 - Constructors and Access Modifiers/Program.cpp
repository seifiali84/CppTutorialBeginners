#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Human
{
public:
    string Name;
    string Family;

    static int Count;

    // Constructor
    Human()
    {
        Count++;
    }
};

int Human::Count = 0;

// class declaration :
class ClassRoom;
class Student;

// Class Room Class
class ClassRoom
{
public:
    string Code;
    int Capacity;
    vector<Student> Students;

    static vector<ClassRoom> ClassRooms;

    static void Register(Student std);
};

vector<ClassRoom> ClassRoom::ClassRooms;

// Student Class
class Student
{
public:
    string NationalCode;
    string Name;
    string Family;
    ClassRoom ExamClass;

    // Constructor
    Student(string nationalCode, string name, string family)
    {
        NationalCode = nationalCode;
        Name = name;
        Family = family;
    }
};

void ClassRoom::Register(Student std)
{
    // Find Empty class room
    int Index = 0;
    for (ClassRoom c : ClassRooms)
    {
        if (c.Capacity > c.Students.size())
        {
            break;
        }
        Index++;
    }

    // Add Student To Class Room
    if (ClassRooms.size() > Index)
    {
        std.ExamClass = ClassRooms[Index];
        ClassRooms[Index].Students.push_back(std);
    }
    else
    {
        cout << "We Don't Have Enough Space!" << endl;
    }
}

int main()
{
    // Create 3 Humans
    Human h1;
    Human h2;
    Human h3;

    // Check Counter
    cout << Human::Count << endl;

    // Ghalamchi

    // Create Class Rooms and Add them To Class Rooms List
    ClassRoom c1{"001", 2};
    ClassRoom::ClassRooms.push_back(c1);
    ClassRoom c2{"002", 1};
    ClassRoom::ClassRooms.push_back(c2);

    // Create Student
    Student s1("121212", "Ali", "Seifi");
    Student s2("131313", "Mohammad", "Bagheri");
    Student s3("141414", "Maryam", "Hosseini");
    Student s4("151515", "Narges", "Ahmadi");

    // Register the Students
    ClassRoom::Register(s1);
    ClassRoom::Register(s2);
    ClassRoom::Register(s3);
    ClassRoom::Register(s4); // there is not Enough Space for 4 Student

    // Show Classes Information

    // Class 1 :
    cout << "Class 1 Students : " << endl;
    for (auto s : ClassRoom::ClassRooms[0].Students)
    {
        cout << s.NationalCode << " - " << s.Name << " - " << s.Family << endl;
    }

    // Class 2 :
    cout << "Class 2 Students : " << endl;
    for (auto s : ClassRoom::ClassRooms[1].Students)
    {
        cout << s.NationalCode << " - " << s.Name << " - " << s.Family << endl;
    }

    return 0;
}