#include<iostream>
using namespace std;

int numberOfDidgit(int n)
{
    if(n == 0)
    {
        return 0;

    }
    return numberOfDidgit(n / 10) + 1;
}
int main()
{
    int n;
    cin>>n;
    cout<<numberOfDidgit(n)<<endl;
    return 0;
}