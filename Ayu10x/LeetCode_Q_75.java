/*
Time Complexity = O(N)
Space Complexity = O(1)
This problem is based on the Dutch National Flag (DNF) Algorithm
*/
public class LeetCode_Q_75 {
    public void sortColors(int[] nums) {

        int lo = 0;
        int hi = nums.length - 1;
        int mid = 0;
        int temp;

        while(mid <= hi){

            switch(nums[mid]) {
                case 0: {
                    temp = nums[lo];
                    nums[lo] = nums[mid];
                    nums[mid] = temp;
                    lo++;
                    mid++;
                    break;
                }
                case 1:
                    mid++;
                    break;
                case 2: {
                    temp =nums[mid];
                    nums[mid] = nums[hi];
                    nums[hi] = temp;
                    hi--;
                    break;
                }
            }
        }
    }
}
