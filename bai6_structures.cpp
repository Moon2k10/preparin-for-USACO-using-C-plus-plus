#include <iostream>
using namespace std; 

int main (){
struct {
    string name;
    int age;
    char grade;
} student;
 student.name = "Liam";
 student.age = 19;
 student.grade = 'A';
 cout << "Name: " << student.name << "\n";
 cout << "Age: " << student.age << "\n";
 cout << "Grade: " << student.grade << "\n";
 return 0;
 }
