#include<iostream>
using namespace std;
inline int max(int a, int b)
{
    return (a > b) ? a : b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int c = max(a,b);

    int x,y;
    x=10;
    y=20;
    int z = max(x,y);
    return 0;
}