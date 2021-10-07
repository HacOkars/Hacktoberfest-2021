package DSA;

import java.util.Arrays;

public class TwoSum {
    public static int[] twoSum(int[] nums, int target) {
        int[] a = new int[2];
        // BufferReader br = new BufferReader(new InputStreamReader(System.in));
        int i = 0, j = nums.length-1;

        while (true) {
            int result = nums[i] + nums[j];
            System.out.println(result);
            if(nums[1]<0){
                if (target > result) j--;
                if (target < result) i++;
                if (result == target) {
                    a[0] = i;
                    a[1] = j;
                    break;
                }
            }

            if(nums[j]<nums[i]){
                Arrays.sort(nums);
            }
                else
            {if (result > target) j--;
                if (result < target) i++;
                if (result == target) {
                        a[0] = i;
                        a[1] = j;
                        break;
                    }
                }
            }

        return a;
    }
    public static void main(String[] args){
        int[] nums = {150,24,79,50,88,345,3
        };
        int target = 200;
        System.out.println(Arrays.toString(twoSum(nums, target)));
    }
}