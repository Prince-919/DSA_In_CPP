#include <iostream>
using namespace std;
int obj(int n)
{
    if(n < 0)
    {
        return 0;
    }
    if(n == 0)
    {
        cout<<n<<" ";
        return 0;
    }
    obj(n--);
    cout<<n<<" ";
}
int main()
{
    int num=3;
    obj(num);
    return 0;
}

// Answer -- Runtime Error