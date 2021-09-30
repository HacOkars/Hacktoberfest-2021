
// This is to be understood that, only vectors can be acessed just like arrays but other containers like maps, sets, etc, they
// need iterators to access the elements. Iterators are just like pointers which points at particular location and to access the
// data or the value at that location we use dereference operator '*'. For example: if 'it_1' is an iterator pointing to the
// first element of a vector, then to print the value at which it is pointing we use cout<<(*it_1); .

#include<bits/stdc++.h>

using namespace std;

int main()
{

    vector <int> v={1,2,3,4,5,6,7,8,9};

    vector <int> :: iterator i,l;  // This is the statement to declare an iterator. We must define the data type of the object which we
                                // pointing at. Here we have declared two iterators.
    i=v.begin();    // We are pointing the first element of the vector.

    l=v.end();      // Here we are pointing at the location which is just next to the last element of the vector. This is to be noted
                    // that .end() does not points at the last, but just next to the last.

    for(i; i!=l; i++)  // Note that, although we can also use i+=1 but this statement will be valid only with vectors, with other 
    {                // containers like map, set this will thorw an error because i+=1 means iterator will point just next location
        cout<<(*i)<<" ";// where it is pointing now, since vector stores element in contigous manner so next element will be accessed 
    }                // using the i+=1 syntax, but when we use maps elements are not stored in contigous fashion, so we will need to
    cout<<"\n";      //   use i++ syntax which will point to location where next element is stored.

    // Please note that after the update of c++ 2011, there has been added features like ranged loops and auto keyword which 
    // eliminates the cryptic syntax of iterators that we use to declare. See example below

    vector <pair<int,int>> v2={{1,1},{2,4},{3,9}};

    // vector <pair<int,int>> :: iterator i1=v2.begin(); // This is one way of declaring an iterator.
    auto i1=v2.begin();  // This is new method of declaring iterator.

    for(i1; i1!=v2.end(); i1++) // Please note that i1 is pointing the first element of the vector which is itself a pair. 
    {                           // by doing i1++ we are just poiting the next pair of the vector.
        cout<<(*i1).first<<" "<<i1->second<<endl;  // Both are the valid statement to access element of a pair inside vector.
    }

}