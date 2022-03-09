#include <iostream>
using namespace std;

// default value start =0
int sum(int arr[], int size, int start=0)
{
    int ans=0;
    for(int i=start; i<size; i++)
    {
        ans +=arr[i];
    }
    return ans;
}

// default value c = 0 , d=0
int sum2(int a, int b, int c=0, int d=0)
{
    return a + b + c + d;
}

int main()
{
    int arr[20];
    // input code for a 

    cout<<sum(arr,20)<<endl;
    return 0;
}