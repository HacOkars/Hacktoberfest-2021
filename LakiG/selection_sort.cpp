// Selection Sort
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void display_array(int *output_array, int size) {
   for(int i = 0; i<size; i++)
      cout << output_array[i] << " ";
   cout << endl;
}
void selectionSort(int *swap_array, int size) {
   int i, j, min_ind;
   for(i = 0; i<size-1; i++) {
      min_ind = i; 
      for(j = i+1; j<size; j++)
         if(swap_array[j] < swap_array[min_ind])
            min_ind = j;
         swap(swap_array[i], swap_array[min_ind]);
   }
}
int main() {
   int num_items;
   cout << "Enter the number of items:";
   cin >> num_items;
   int input_arr[num_items];
   cout << "Enter items:" << endl;

   for(int i = 0; i<num_items; i++) {
      cin >> input_arr[i];

   }
   cout << "Array before Sorting: ";
   display_array(input_arr, num_items);

   selectionSort(input_arr, num_items);
   cout << "Array after Sorting: ";

   display_array(input_arr, num_items);
}
