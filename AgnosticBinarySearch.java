public class AgnosticBinarySearch {
    public static void main(String[] args) {
        int[] arr = {11, 22, 33, 44, 55, 66, 77, 88, 99};
        int target = 99;
        System.out.println(binarySearch(arr, target));
    }

    static int binarySearch(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;
        boolean isac = arr[start] < arr[end];
        while (start <= end) {
        int mid=start+(end-start)/2;
        if (arr[mid]==target)
        {
            return mid;
        }
        if (isac)
        {
            if (arr[mid]>target)
            {
                end=mid-1;
            }
            else {
                start=mid+1;
            }
        }
        else
        {
            if (arr[mid]<target)
            {
                end=mid-1;
            }
            else {
                start=mid+1;
            }
        }

 }
        return -1;
}
}
