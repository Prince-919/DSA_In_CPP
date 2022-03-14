/*
Consider an n-element array,a , where each index i in the array contains a reference to an array of ( k base i) integers (where the value of( k base i)  varies from array to array). See the Explanation section below for a diagram.

Given a, you must answer q queries. Each query is in the format i j, where i denotes an index in array a and j denotes an index in the array located at a[i] . For each query, find and print the value of element  in the array at a[i] location  on a new line.

Click here to know more about how to create variable sized arrays in C++.

Input Format

The first line contains two space-separated integers denoting the respective values of  (the number of variable-length arrays) and  (the number of queries).
Each line  of the  subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 … a[i]k-1 describing the -element array located at .
Each of the  subsequent lines contains two space-separated integers describing the respective values of  (an index in array ) and  (an index in the array referenced by ) for a query.

Constraints
1 <= n <=10^5
1 <= q <=10^5
1 <= k <=3.10^5
n <= Ek <=3.10^5
0 <= i < n
0 <= j < k


All indices in this challenge are zero-based.
All the given numbers are non negative and are not greater than 
Output Format

For each pair of  and  values (i.e., for each query), print a single integer that denotes the element located at index  of the array referenced by . There should be a total of  lines of output.

Sample Input

2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
Sample Output

5
9
Explanation

The diagram below depicts our assembled Sample Input:

variable-length-arrays.png

We perform the following  queries:

Find the array located at index , which corresponds to . We must print the value at index  of this array which, as you can see, is .
Find the array located at index , which corresponds to . We must print the value at index  of this array which, as you can see, is .
*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size_of_array;
    int no_of_queries;
    cin>>size_of_array>>no_of_queries;
    vector<vector<int>> vec1;
    for(int i=0; i<size_of_array; i++)
    {
        int size_of_inside_array;
        cin>>size_of_inside_array;
        vector<int> vec2;
        for(int j=0; j<size_of_inside_array; j++)
        {
            int a;
            cin>>a;
            vec2.push_back(a);
        }
        vec1.push_back(vec2);
    }
    for(int i=0; i<no_of_queries; i++)
    {
        int I,J;
        cin>>I>>J;
        cout<<vec1[I][J]<<endl;
    }

    return 0;
}