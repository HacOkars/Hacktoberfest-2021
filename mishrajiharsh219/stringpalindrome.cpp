#include <bits/stdc++.h>
using namespace std;
int palindrome(char a[], int maxlen)
{
    int i=0;
    int j=strlen(a)-1;
   while(i<=j){
       if(a[i]==a[j])
       {i++;
       j--;}
       else 
       return false;
   }
return true;}
int main()
{
    char a[100];
    cin>>a;
    int ap=palindrome(a,10);
    if(ap)
    cout<<"palindrome";
    else
    cout<<"not palindrome";
    return 0;
}