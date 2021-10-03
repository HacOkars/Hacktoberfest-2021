#include<iostream>
#include<unordered_map>
#include<cstring>

using namespace std;
/*
string unique_substring(string str){

    int i = 0;
    int j = 0;

    unordered_map<char,int> m;

    while(j < str.length()){
        char ch = str[j];

        //if it is inside hashmap & its index >= start of the current window
        if(m.count(ch) and m[ch]>=i){

        }
    }


}

*/

string unique_substring(string str){

    int i = 0;
    int j = 0;

    unordered_map<char,int> m;
    
    while(j < str.length()){
        
        if(m.find(str[j])==m.end()){
            m.insert({str[j],j});
        }
        else{
            i = m.at(str[j])+1;
        }
        j++;
    }
    string s = "";
    for(;i<j;++i){
        s.push_back(str[i]);
    }
    return s;
}

int main(){
    string input;
    cin>>input;

    cout<<unique_substring(input);

    return 0;
}