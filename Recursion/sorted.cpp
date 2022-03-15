
// Sorted Array Recursion

#include<iostream>
using namespace std;
// method 1
int is_Sorted(int arr[], int size)
{
    if(size == 0 || size == 1)
    {
        return true;
    }
    if(arr[0] > arr[1])
    {
        return false;
    }
    bool isSmallerSorted = is_Sorted(arr + 1, size -1);
    return isSmallerSorted; 
}

// method 2
bool is_Sorted2(int arr[], int size )
{
    if(size == 0 || size == 1)
    {
        return true;
    }
    bool isSmallerSorted = is_Sorted(arr + 1, size -1);
    if(!isSmallerSorted)
    {
        return false;
    }
    if(arr[0] > arr[1])
    {
        return false;
    }else{
        return true;
    }
}
int main ()
{
     int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<is_Sorted2(arr, n)<<endl;
    return 0;
}