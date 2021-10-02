package Arrays;

import java.util.Arrays;

public class MergeSortedArraysWtExtSpace {
    static int[] arr1 = new int[] { 5, 7, 8, 9 };
    static int[] arr2 = new int[] { 1, 2 };

    static void merge(int m, int n) {

        for (int i = n - 1; i >= 0; i--) {
            /*
             * Find the smallest element greater than ar2[i]. Move all elements one position
             * ahead till the smallest greater element is not found
             */
            int j, last = arr1[m - 1];
            for (j = m - 2; j >= 0 && arr1[j] > arr2[i]; j--)
                arr1[j + 1] = arr1[j];

            // If there was a greater element
            if (j != m - 2 || last > arr2[i]) {
                arr1[j + 1] = arr2[i];
                arr2[i] = last;
            }
        }
    }

    public static void main(String[] args) {
        merge(4, 2);
        System.out.print("First Array : ");
        System.out.println(Arrays.toString(arr1));

        System.out.print("Second Array : ");
        System.out.println(Arrays.toString(arr2));
    }
}