#include <iostream>
using namespace std;
#include"Student2.cpp"
int main()
{
    // Create object statically
    Student2 s1;
    Student2 s2;

    //s1.age = 24;
    s1.rollNumber = 101;
    
    cout<<"S1 Age : "<<s1.getAge()<<endl;
    cout<<"S2 RollNumber : "<<s1.rollNumber<<endl;
    s1.display();
    s2.display();

    // Create object dynamically 
    Student2 *s3 = new Student2;
    (*s3).display();

    s3 -> rollNumber=104;
    cout<<"S3 Age : "<<s3 -> getAge()<<endl; 
    s3 -> display();
    return 0;
}