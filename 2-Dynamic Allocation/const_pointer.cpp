#include<iostream>
using namespace std;
void g(int const & a)
{
    // a++;      // error
}
void f(const int * p)
{
    // (*p)++;       //error
}
int main()
{
    int const i =10;
    int const *p=&i;
    cout<<i<<endl;

    int j=12;
    int const *p2=&j;
    cout<<j<<endl;
    j++;
    cout<<j<<endl;
    return 0;

}