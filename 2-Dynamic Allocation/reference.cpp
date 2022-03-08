#include<iostream>
using namespace std;

void increment(int& n)
{
    n++;
}
/*
int& f(int n)
{
    int a =n;
    return a;
}
*/

int* f2()
{
    int i=10;
    return &i;
}
 int main()
 {
     // got to same memory different cases 
     int i =10;
     i=10;

     int* p = f2();


     int& k1 = f(i);

     increment(i);
     cout<<i<<endl;

     int& j= i;
     i++;
     cout<<j <<endl;
     j++;
     cout<<i<<endl;

     int k=100;
     j=k;
     cout<<i<<endl;
     return 0;
 }