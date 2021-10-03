#include<iostream>
#include<unordered_map>
#include<cstring>
#include<limits.h>

using namespace std;
/*
string stringWindow(string s, string p){

    unordered_map<char,int> m1;
    unordered_map<char,int> m2;
    
    for(int i = 0; i < p.length(); ++i){
        char ch = p[i];
        m1[ch] = m1[ch] + 1;
    }
    for(int i = 0; i < s.length(); ++i){
        char ch = s[i];
        m2[ch] = m2[ch] + 1;
    }
    int i = 0;
    int j = 0;
    int len = 0;
    
    for(j = 0; j < s.length(); ++j){
        char ch = s[j];
        if((m1.find(ch) == m1.end())&&(m1.find(s[i])==m1.end())){
            i = j + 1;
            m2.erase(ch);
        }
    }
    for(auto x : m2){
        len += x.second;
    }
    int l = len;
    for(;i<len;){
        char ch = s[i];
        if(m2[ch] > 1){
            i++;    l--;
        }
        else{
            break;
        }
    }
    l = l + i;
    string str;
    len = p.length();
    for(;i<l;++i){
        char ch = s[i];
        if(m1.find(ch) != m1.end())
            len--;
        str.push_back(ch);
        if(len == 0)
            break;
    }

    return str;;
}
*/

string stringWindow(string s, string p){
    //Arrary as a Freq map or you can hashmap
    int FP[256] = {0};
    int FS[256] = {0};

    for(int i = 0; i < p.length(); i++){
        FP[p.at(i)]++;
    }

    int cnt = 0;
    int start = 0;
    int start_idx = -1;//start index for left window
    int min_so_far = INT_MAX;
    //Sliding window Algorithm
    for(int i = 0; i < s.length(); ++i){
        //expand window by inculding current character
        char ch = s[i];
        FS[s[i]]++;

        //count how many character have been matched till now (string and pattern)
        if(FP[ch] != 0 and FS[ch] <= FP[ch]){
            cnt++;
        }
        //another thing if all character are found in the current window then you can start contracting
        if(cnt == p.length()){
            //start contracting fron the left to remove unwanted charcter
             while(FP[s[start]]==0 or FS[s[start]]>FP[s[start]]){
                 FS[s[start]]--;
                 start++;
             }
             
             //note the window size
             int window_size = i - start + 1;
             if(window_size < min_so_far){
                 min_so_far = window_size;
                 start_idx = start;
            }
        }
    }
    if(start_idx == -1)
        return "No Window Found";
    
    return s.substr(start_idx,min_so_far);
}

int main(){
    string str;
    getline(cin,str);
    string p;
    getline(cin,p);
    cout<<stringWindow(str,p)<<endl;
}
