
// Factorial Number

#include<iostream>
using namespace std;

int fact(int n)
{
    if(n == 0)
    {
        return 1;
    }    
        int smallOutput = fact(n-1);
        int Output = n * smallOutput;
        return Output;
    
}
 int main()
 {
     cout<<fact(5)<<endl;
    return 0;
 }