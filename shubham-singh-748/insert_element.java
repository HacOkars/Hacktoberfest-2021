//Write a Java program to insert an element (specific position) into an array.

import java.util.Scanner;
import java.util.Arrays;

public class insert_element {
    public static void main(String[] args) {
        int[] arr = {19, 91, 29, 37, 41, 61, 71, 97, 63,99};
        System.out.println("Original array is "+Arrays.toString(arr));
        insertElement(arr);
    }
    static void insertElement(int[] arr)
    {
        Scanner in = new Scanner(System.in);
        int index = 2;
        System.out.println("Enter an element to insert at 2nd position");
        int insertIndex = in.nextInt();
        for(int i=arr.length-1; i>index; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[index] = insertIndex;
        System.out.println("New array after insert an element is "+ Arrays.toString(arr));
    }
}
