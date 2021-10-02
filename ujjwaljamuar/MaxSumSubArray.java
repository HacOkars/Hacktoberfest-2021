package Arrays;

public class MaxSumSubArray {
    static int maxSum(int[] arr) {
        int currentMax = arr[0];
        int maxSoFar = arr[0];
        int n = arr.length;

        for (int i = 0; i < n; i++) {
            currentMax = currentMax + arr[i];
            if (currentMax < arr[i]) {
                currentMax = arr[i];
            }

            if (maxSoFar < currentMax) {
                maxSoFar = currentMax;
            }
        }

        return maxSoFar;
    }

    public static void main(String[] args) {
        int[] arr = { -2, -3, 4, -1, -2, 1, 5, -3 };
        System.out.println("Max contiguous sum is : " + maxSum(arr));
    }
}
