//Find a specific keyword in an array &
//also find its index position using binary search.


import java.util.Scanner;
public class find_specific_keyword {
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

        int ans = findNum(arr, target);
        System.out.println(ans);

    }
    static int findNum(int[] arr, int target)
    {
        int start = 0;
        int end = arr.length-1;
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            if(target > arr[mid])
            {
                start = mid;
            }
            else if(target < arr[mid])
            {
                end = mid;
            }
            else {
                System.out.println("Yes " + target + " is present in given array.");
                return mid;
            }
        }
        System.out.println("Nope "+target+" is not present there.");
        return -1;
    }
}
