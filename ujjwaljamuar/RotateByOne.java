package Arrays;

public class RotateByOne {

    static void printArr(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void rotate(int[] arr) {
        int i = 0, j = arr.length - 1, temp;

        while (i != j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }

    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 4, 5 };

        System.out.print("Before rotation : ");
        printArr(arr);

        System.out.print("After rotation : ");
        rotate(arr);
        printArr(arr);

    }
}
