#include<bits/stdc++.h>
using namespace std;

void printsubstring(string s, string curr, int index)
{
    if(index==s.size())
    {cout<<curr<<" ";
    return ;}

    printsubstring(s,curr,index+1);
    printsubstring(s,curr+s[index],index+1);
}

int main()
{
    string s;
    cin>>s;
    printsubstring(s,"",0);
}