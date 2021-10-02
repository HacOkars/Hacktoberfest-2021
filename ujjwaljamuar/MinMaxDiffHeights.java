package Arrays;

import java.util.Arrays;

public class MinMaxDiffHeights {
    public static int getMinDiff(int[] arr, int n, int k) {
        Arrays.sort(arr);

        if (n == 1) {
            return 0;
        }

        int ans = arr[n - 1] - arr[0]; // diff between max height and smallest height

        int small = arr[0] + k;
        int large = arr[n - 1] - k;
        int temp = 0;

        if (small > large) {
            temp = small;
            small = large;
            large = temp;
        }

        for (int i = 1; i < n - 1; i++) {
            int subtract = arr[i] - k;
            int add = arr[i] + k;

            if (subtract >= small || add <= large) {
                continue;
            }

            if (large - subtract <= add - small)
                small = subtract;
            else
                large = add;

        }

        return Math.min(ans, large - small);

    }

    public static void main(String[] args) {
        int arr[] = { 4, 6 };
        int n = arr.length;
        int k = 10;
        System.out.println("Maximum difference is " + getMinDiff(arr, n, k));
    }
}
