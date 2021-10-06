//Write a java program to find the greatest element of an array just after the smallest.

import java.util.Scanner;

public class BinarySearch {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the size of an array");
        int n = in.nextInt();
        int[] arr = new int[n];

        System.out.println("Enter values of an array");
        for(int i=0; i<n; i++)
        {
            arr[i] = in.nextInt();
        }

        System.out.println("Enter a number to find");
        int target = in.nextInt();

        int ans = findNum(arr, target, n);
        System.out.println(ans);

    }
    static int findNum(int[] arr, int target, int n)
    {
        int start = 0;
        int end = n-1;
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            if(target > arr[mid])
            {
                start = mid + 1;
            }
            else if(target < arr[mid])
            {
                end = mid - 1;
            }
            else {
                System.out.println("Yes " + target + " is present in given array.");
                return mid;
            }
        }
        System.out.println("Nope "+target+" is not present there.");
        return start;
    }
}
