#include<iostream>
using namespace std;
#include"Student.cpp"


int main()
{
    // Create object statically 
    Student s1;
    Student s2;
    Student s3,s4,s5;

    s1.age = 24;
    s1.rollNumber = 101;
    cout<<s1.age<<endl;
    cout<<s1.rollNumber<<endl;
    s2.age = 30;



    // Create Dynamically object
    Student *s6 = new Student;

    // write method 1
    (*s6).age = 23;
    (*s6).rollNumber = 104;
z
    // method 2
    s6 -> age = 23;
    s6 -> rollNumber = 104;
    return 0;
}