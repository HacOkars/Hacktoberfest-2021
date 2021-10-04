/***
 * finding the pair whose sum is equals to the user input
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

void display(std::vector<int> arr)
{
    std::cout << "[ ";
    for (std::vector<int>::iterator i = arr.begin(); i != arr.end(); i++)
        std::cout << *i << " ";
    std::cout << "]\n";
}
int main(int argc, char const *argv[])
{
    std::vector<int> arr = {2, 9, 3, 4, 1};

    display(arr);
    /***
     * @def here to solve it in linear time complexity
     * we use the  hashing method
     */
    std::unordered_set<int> hashTable;

    // it is the Sum which has to be checked can be user input
    int S;
    std::cout<<"Enter the Sum to be searched-> ";
    std::cin>>S;
    int flag = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int temp = S - arr[i];
        if (hashTable.find(temp) != hashTable.end())
        {
            flag = 1;
            std::cout << "Found! (" << temp << ", " << arr[i] << ")\n";
            break;
        }
        hashTable.insert(arr[i]);
    }
    if(!flag){
        std::cerr<<"Not found!\n";
    }

    return 0;
}