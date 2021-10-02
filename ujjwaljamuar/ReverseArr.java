package Arrays;

public class ReverseArr {
    public static void printArr(int[] arr){
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void reverse(int[] arr , int start, int end){
        int temp;
        while(start < end){
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
        printArr(arr);
    }
    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5};
        ReverseArr.printArr(arr);
        ReverseArr.reverse(arr, 0, arr.length - 1);
    }
}