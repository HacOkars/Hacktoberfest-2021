#include<bits/stdc++.h>

using namespace std;


void printmap(map<int, string> mp)
{
    cout<<mp.size()<<endl;

    //*********This is one way of accesing element by element of map************//


    // for(auto it=mp.begin(); it!=mp.end(); it++)  // Here it is an iterator which points at the pair of the vector
    // {                                           // so we need it-> or (*it) to access pair.
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    for(auto &elm: mp)  // Here elm is actually a pair and elm is getting one after other pair in the loop. So -> or * (dereference)
    {                   // are not required to print.
        cout<<elm.first<<" "<<elm.second<<endl;
    }
}
int main()
{
    map <int, string> mp1; // Map is just like dictionary data type of python where data is stored in key-value pair.

    // There are two ways of inserting data inside a map, first one is:-
    mp1[1]="ONE";  // Here mp1[key]=value is the syntax of adding element. 1 is not the index just like in vectors and arrays.
    mp1[2]="Two";  // Time complexity of adding an element in map is O(log(n)) where n is current size of map.
    mp1[3];// Even if we don't give any value it still takes O(log(n)) and an empty string will be inserted in the value section of 3.

    // printmap(mp1);

    // To find if there is a key in map as asked by the user

    auto it=mp1.find(2);// map_name.find(key) this syntax return the iterators pointing the element of map with key asked by the user
                // and if no such element exists the it returns iterators to the end of map i.e., map.end()

    if(it==mp1.end()) cout<<"Element not found\n";
    else
    cout<<it->first<<" "<<it->second<<endl;

    // To clear the whole map we have a syntax map_name.clear(); 

    // mp1.clear();
    
    printmap(mp1);
}