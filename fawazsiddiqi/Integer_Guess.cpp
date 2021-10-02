//
//  main.cpp
//  integer
//
//  Created by Fawaz Siddiqi on 12/01/2021.
//

#include <iostream>
#include <cmath>
using namespace std;
int verify (int,int);

int main() {
    int maxNum = 1000000;
    int num = rand();
    
    cout << "Number = " << num <<endl;
    
    int output = maxNum/2;
    int temp = output;
    int ver = 0;
   
    for (int i = 0; i < 50; i++) {
        ver = verify(output,num);
        
        if (temp < 2) {
            temp = temp * 2;
        }
        else{
            temp = temp / 2;
        }
        temp = ceil(temp);
        
        if(ver == 1){
            output = output - temp;
        }
        else if (ver == -1){
            output = output + temp;
        }
        else{
            cout << "Output = " << output << " Number = " << num << " Guesses taken = " << i << endl;
        }
    }
    
    return 0;
}

int verify (int num1, int num2){
int ret = 0;
    if (num1 > num2){
        ret = 1;
    }
    else if (num1 < num2){
        ret = -1;
    }
    else{
        ret = 0;
    }
    return ret;
}
