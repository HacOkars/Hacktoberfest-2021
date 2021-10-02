#include<bits/stdc++.h>
using namespace std;

void printsubstring(string s, string curr, int index, vector<string>&ans)
{
    if(index==s.size())
    {ans.push_back(curr);
    curr.clear();
    return;}

    printsubstring(s,curr,index+1,ans);
    printsubstring(s,curr+s[index],index+1,ans);
}

vector<string>powerset(string s)
{
    vector<string>v;
    printsubstring(s,"",0,v);
    return v;
}

int main()
{
    string s;
    cin>>s;
    vector<string> ans = powerset(s);
        
        //sorting the result of the powerSet() function
        sort(ans.begin(),ans.end());
        
        //printing the result
        for(auto x:ans)
        cout<<x<<" ";
        cout<<endl;
}