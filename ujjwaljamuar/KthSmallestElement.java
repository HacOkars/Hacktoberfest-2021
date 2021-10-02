package Arrays;

import java.util.Arrays;

public class KthSmallestElement {
    public int kthsmall(int[] arr, int k){
        Arrays.sort(arr);

        int ksmall = arr[k-1];

        return ksmall;

    }
    public static void main(String[] args) {
        KthSmallestElement ksm = new KthSmallestElement();
        int[] arr = {15,10,7,4,3,11,20,40,60};
        int res = ksm.kthsmall(arr, 3);
        
        System.out.println("Kth Smallest Element is : " + res);
    }
}
