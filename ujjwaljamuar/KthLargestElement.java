package Arrays;

import java.util.Arrays;

public class KthLargestElement {
    public int kthLarge(int[] arr, int k) {
        Arrays.sort(arr);
        int n = arr.length;

        int ksmall = arr[n - k];

        return ksmall;

    }

    public static void main(String[] args) {
        KthLargestElement ksm = new KthLargestElement();
        int[] arr = { 15, 10, 7, 4, 1, 2, 3, 11, 20, 30, 40, 60 }; // 1,2,3,4,7,10,11,15,20,30,40,60

        int res = ksm.kthLarge(arr, 3);
        System.out.println("Kth Largest Element is : " + res);
    }
}
