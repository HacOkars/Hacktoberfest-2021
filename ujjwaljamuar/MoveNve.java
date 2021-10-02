package Arrays;

public class MoveNve {
    public static void move(int[] arr) {
        int n = arr.length;

        int j = 0, temp;

        for (int i = 0; i < n; i++) {
            if (arr[i] < 0) {
                if (i != j) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
                j++;
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
        int[] arr = { 1, 5, -2, -3, -5, 4 };
        printArr(arr);
        move(arr);
    }
}
