#include<iostream>
using namespace std;
// method 1
int is_Sorted(int a[], int size)
{
    if(size == 0 || size == 1)
    {
        return true;
    }
    if(a[0] > a[1])
    {
        return false;
    }
    bool isSmallerSorted = is_Sorted(a + 1, size -1);
    return isSmallerSorted; 
}

// method 2
bool is_Sorted2(int a[], int size )
{
    if(size == 0 || size == 1)
    {
        return true;
    }
    bool isSmallerSorted = is_Sorted(a + 1, size -1);
    if(!isSmallerSorted)
    {
        return false;
    }
    if(a[0] > a[1])
    {
        return false;
    }else{
        return true;
    }
}
int main ()
{
     
    return 0;
}