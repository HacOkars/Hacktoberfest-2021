#include<bits/stdc++.h>

using namespace std;
int main()
{
  int t,elem,i;
  cin>>t;
  while(t--){
      set<int> s;
      vector <int> v;
    for(i=0;i<4;i++)
      {
        cin>>elem;
        s.insert(elem);
        v.push_back(elem);
      }
    int l=s.size();
    if(l==1)
     cout<<0<<endl;
    else if(l==2)
          {
            sort(v.begin(),v.end());
            if((v[0]==v[1]&&v[1]==v[2])||(v[3]==v[1]&&v[1]==v[2]))
             cout<<"1"<<endl;
            else
            cout<<"2"<<endl;
          }
    else
     cout<<2<<endl;
  }
}
