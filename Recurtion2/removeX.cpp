#include <iostream>
using namespace std;
int removeX(char s[])
{
    if(s[0] == '\0')
    {
        return;
    }
    if(s[0] != 'x')
    {
        removeX(s + 1);
    }
    else {
        int i=1;
        for(; s[i] !='\0'; i++)
        {
            s[i - 1] = s[i];
        }
        s[i - 1] = s[i];
    }
}
int main()
{
    char c[100];
    cin>>c;
    int l = removeX(c);
    cout<<l<<endl;
    return 0;
}