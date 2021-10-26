#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int maxSum = INT16_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = 0;
            for(int k=i;k<=j;k++){
                sum += a[k];
            }maxSum = max(maxSum, sum);
        }
    }
    cout<<maxSum<<endl;
    return 0;
}