#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int key, A[10];
  cout << "Enter the numbers:- ";
  for (int i = 0; i < 10; i++)
  {
    cin >> A[i];
  }
  cout << "Enter the key:- ";
  cin >> key;
  for (int i = 0; i < 10; i++)
  {
    if (key == A[i])
    {
      cout << " Key is found at " << i;
      return 0;
    }
  }
  cout << "key not found";
  return 0;
}