package DSA;

public class BinarySearch{
    public static void main(String[] args) {
        int [] arr = {2,8,12,15,23,26};
        int target = 15;
        int ans = BinarySearchAlgo(arr,target);
        System.out.print(ans);
    }
    //return the index of target element
    static int BinarySearchAlgo(int[] arr, int target){
        int start = 0;
        int end   = arr.length-1;
        //for Ascending Order
        if(arr[start] < arr[end]) {
            while (start <= end) {
                int mid = start + ((end - start) / 2);
                if (target > arr[mid]) {
                    start = mid+1;
                }
                else if(target < arr[mid]){
                    end = mid-1;
                }
                else {
                    return mid;
                }
            }
        }
        // for Descending Order
        if(arr[start] > arr[end]) {
            while (start <= end) {
                int mid = start + ((end - start) / 2);
                if (arr[mid] < target) {
                    end = mid-1;
                }
                else if(arr[mid]>target){
                    start = mid+1;
                }
                else {
                    return mid;
                }
            }
        }
        return -1;
    }
}
