#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i;
    int l=s.length();
    for(i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-1-i])
        {
            cout<<"NO";
            break;
        }
    }
    if(i==l/2)
        cout<<"YES";
}
