//https://leetcode.com/problems/longest-consecutive-sequence/
class Solution {
public:
	int longestConsecutive(vector<int>& nums) {
		
        //O(Nlong)
		sort(nums.begin(),nums.end());
		int n=nums.size(); 
		if(n==0)return 0;
		
		int longest=1,curr=1;
		for(int i=1;i<n;i++)
		{
			if(nums[i]!=nums[i-1])
			{
				if(nums[i]==nums[i-1]+1)
					curr++;
				else
				{
					longest=max(longest,curr);
					curr=1;
				}
			}
		}
		return max(longest,curr);
	}
};