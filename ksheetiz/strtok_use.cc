#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main(){

    char input[1000];
    cin.getline(input,1000);

    //strtok()
    /*
    cout<<strtok(input," ")<<endl; 
    cout<<strtok(input," ")<<endl;
    cout<<strtok(input," ")<<endl;
    cout<<strtok(input," ")<<endl;
    */


    //if we replace input with NULL starting from second then it will change the output
    /*
    cout<<strtok(input," ")<<endl;  //internally maintains the state of the string you passed inlast fn call using a static variable
    cout<<strtok(NULL," ")<<endl;
    cout<<strtok(NULL," ")<<endl;
    cout<<strtok(NULL," ")<<endl;
    */
    
    char *token = strtok(input," ");

    while(token !=  NULL){
        cout<<" ' "<<token<<" ' ";
        token = strtok(NULL," ");
    }

}