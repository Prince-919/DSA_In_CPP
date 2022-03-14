#include <iostream>
using namespace std;
int sumOfArray(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    int total = arr[0] + sumOfArray(arr + 1, n - 1);
    return total;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<sumOfArray(arr, n)<<endl;
    return 0;
}