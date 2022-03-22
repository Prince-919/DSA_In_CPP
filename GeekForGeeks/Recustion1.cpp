
// 1 To N Print Without loop

#include<iostream>
using namespace std;
void printNos(int N)
{
    if(N == 0)
    {
        return;
    }
    return printNos(N - 1);
    cout<<N<<" ";
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        
        printNos(N);
        cout<<endl;
    }
    return 0;
}