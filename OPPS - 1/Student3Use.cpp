#include<iostream>
using namespace std;
#include"Student3.cpp"
int main()
{
    Student3 s1;


    Student3 *s2 = new Student3;
    s1.setAge(20); 
    s2 -> setAge(24);

    s1.display();
    s2 -> display();
    return 0;
}