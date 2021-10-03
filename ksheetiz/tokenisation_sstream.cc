#include<iostream>
#include<sstream>
#include<vector>
#include<cstring>
using namespace std;

int main(){
    string input;
    getline(cin,input);

    //Create a string stream object
    stringstream ss(input);

    // Suports >> and << operators
    string token;
    vector<string> tokens;
    while(getline(ss,token,' ')){
        tokens.push_back(token);
    }

    //print all tokens
    for(auto x: tokens){
        cout<<" ' "<<x<<" ' ";
    }


    return 0;
}