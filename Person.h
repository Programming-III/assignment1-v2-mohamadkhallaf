#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
class Person{
private:
string name;
int id;
public:
Person();
~Person();
Person(string name,int id);
void display();
void setid(int id){
    this->id=id;
}
int getid(){
    return id;
}
string getName(){
    return name;
}
void setName(string name)
{
    this->name=name;
}
};
#endif
