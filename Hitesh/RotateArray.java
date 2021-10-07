package DSA;

import javax.sound.midi.Soundbank;
import java.util.Arrays;

public class RotateArray {
    public static void main(String[] args) {
        int[] arr = {1,45,6,21,342,43,57,12,133};
        System.out.println(Arrays.toString(RotateArray(arr)));
    }
    static int[] RotateArray(int[] arr){
        int start = 0;
        int end = arr.length-1;
        while(start<=end){
            int temp=arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
        return arr;
    }
}
