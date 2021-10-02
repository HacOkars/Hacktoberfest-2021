package Arrays;

public class sort012s {
    public static void sort(int[] arr, int arrSize) {
        int temp = 0, low = 0, mid = 0, high = arrSize - 1;
        while (mid <= high) {
            switch (arr[mid]) {
                case 0:
                    temp = arr[low];
                    arr[low] = arr[mid];
                    arr[mid] = temp;
                    low++;
                    mid++;
                    break;

                case 1:
                    mid++;
                    break;

                case 2:
                    temp = arr[mid];
                    arr[mid] = arr[high];
                    arr[high] = temp;
                    high--;
                    break;
            }
        }
        printArr(arr);
    }

    public static void printArr(int arr[]) {
        int i, n = arr.length;
        for (i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] arr = { 0, 1, 2, 0, 1, 2, 0, 1, 2, 2, 2, 1, 1, 0, 0 };
        printArr(arr);
        sort(arr, arr.length);
    }
}
