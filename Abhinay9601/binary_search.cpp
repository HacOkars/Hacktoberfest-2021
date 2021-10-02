#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  int A[] = {6, 8, 13, 17, 20, 25, 28, 31, 38, 46};
  int l = 0, h = 9, key, mid;
  cout << "Enter key:- ";
  cin >> key;
  while (l <= h)
  {
    mid = (l + h) / 2;
    if (key == A[mid])
    {
      cout << "Found at :- " << mid;
      return 0;
    }
    else if (key < A[mid])
      h = mid - 1;
    else
      l = mid + 1;
  }
  cout << "Not Found";
  return 0;
}