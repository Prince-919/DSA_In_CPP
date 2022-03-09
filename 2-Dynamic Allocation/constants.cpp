#include <iostream>
using namespace std;
int main()
{
    //  create constants int
    const int i = 10;
    const int i2 = 10;

    // create constants refernce from a non const int
    int j = 12;
    const int& k = j;
    j++;
    cout << k << endl;

    // create constants reference from a const int

    int const j2=12;
    int const &k2=j2;

    // create reference from a const int 
    /*
    int const j3=123;
    int& k3=j3; // error
    k3++;
    */
    return 0;
}