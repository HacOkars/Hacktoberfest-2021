// Tower of Hanoi
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void tower_of_hanoi(int n, char first, char second, char third){
  if (n == 1){
      cout << "Move disk one from rod " << first << " to rod " << second<< endl;
      return;
  }
  tower_of_hanoi (n - 1, first, third, second);
  cout << "Move disk from" << first << " to rod " << second << endl;
  tower_of_hanoi (n - 1, third, second, first);
}

int main(){
  int num_items;
  cin >> num_items;
  tower_of_hanoi(num_items, 'A', 'B', 'C');
  return 0;
}
