#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <string>
#include "Person.h"
using namespace std;
class Instructor:Person{
private:
string department;
int experienceYears;
public:
void display();
Instructor();
Instructor(string name,int id,string department,int experienceYears);
string getDepartment(){
    return department;
}
void setDepartment(string name)
{
    this->department=name;
}
int getExperienceYears(){
    return experienceYears;
}
void setExperienceYears(int experienceYears){
    this->experienceYears=experienceYears;
}
};

#endif

