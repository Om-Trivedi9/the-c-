#include <iostream>
#include <string.h>
using namespace std;

class Student
{
private:
   int id;
   char name[70];
   int age;
   char course[70];
   char city[70];
   string email;
   char college[70];

public:
   void satdata(int id, char name[], int age, char course[], char city[], string emai, char college[])
   {
      this->id = id;
      strcpy(this->name, name);
      this->age = age;
      strcpy(this->course, course);
      strcpy(this->city, city);
      this->email = email;
      strcpy(this->college, college);
   }

   void getdata()
   {
   }
};

int main()
{
   Student s1;
}