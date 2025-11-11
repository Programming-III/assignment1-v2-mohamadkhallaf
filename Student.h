#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
using namespace std;
class Student : Person{
private:
int yearLevel;
string major;
public:
Student(string name,int id,int yearLevel,string major);
void display();
int getYearLevel(){
    return yearLevel;
}
void setYearLevel(int yearLevel){
    this->yearLevel=yearLevel;
}
string getMajor(){
    return major;
}
void setMajor(string major)
{
    this->major=major;
}

};
#endif
