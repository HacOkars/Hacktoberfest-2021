//https://leetcode.com/problems/search-a-2d-matrix/

bool searchMatrix(vector<vector<int>>& matrix, int target) {

long long n=matrix.size(); //row
long long m=matrix[0].size();  //clm size

long long i=0,j=m-1;  
while(i<n && j>=0)
{
if(matrix[i][j]==target)  //if found
    return true;
else if(matrix[i][j]>target) 
    j--;
else
i++;  //move bottom row
} 
return 0;
}