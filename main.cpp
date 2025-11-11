#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
// ==================== Person Class Implementation =========================


// ==================== Instructor Class Implementation ====================

class Instructor : public Person {

    Instructor:: Instructor() : Person() {
        setDepartment("");
        setExperienceYears(0);
    }

    Instructor(string n, int i, string d, int exp) : Person(n, i) {
        department = d;
        experienceYears = exp;
    }

    void display() const {
        cout << "Instructor Info:" << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Experience: " << experienceYears << " years" << endl;
    }
};

class Course{
        ~Course() {
        delete[] students;
    }
}

using namespace std;
int main() {
 return 0;
}

//g++ main.cpp -o main.exe
