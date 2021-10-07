package DSA;

import java.util.ArrayList;
import java.util.Arrays;

public class BubbleSort {
    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5,6};
        bubbleSort(arr);
        System.out.println(Arrays.toString(arr));
    }
    static void bubbleSort(int[] arr){
        //if array is already sorted hence no need to check more than one pass
        boolean swapped=false;
        //outer loop jus for count
        for (int i = 0; i < arr.length; i++) {
            //inner loop will run from index 1 to arr.length-i
            for (int j = 1; j < arr.length-1 ; j++) {
                if(arr[j]<arr[j-1]){
                    int temp=arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=temp;
                    swapped = true;//if swap occurs once in array
                }
            }
            //if there's no swap in loop so break to loop because array is already sorted
            if(!swapped) break;
        }
    }
}
