
// Fabanacci Number

#include <iostream>
using namespace std;
int fiba(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int smallOutput1 = fiba(n - 1);
    int smallOutput2 = fiba(n - 2);
    return smallOutput1 + smallOutput2;
}
int main()
{
    int n;
    cin >> n;
    cout << fiba(n) << endl;
    return 0;
}